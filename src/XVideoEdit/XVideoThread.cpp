#include "XVideoThread.h"
#include "XFilter.h"
#include<iostream>
using namespace std;
using namespace cv;

//一号视频源
static VideoCapture cap1;

static VideoWriter vw;

static bool isexit = false;

void GetTimeBySec(int times, int &hour, int &min, int &sec)
{
	hour = times / 3600;
	times = times - hour * 3600;
	min = times / 60;
	times = times - min * 60;
	sec = times;
}

XVideoThread::XVideoThread()
{
	start();
}


XVideoThread::~XVideoThread()
{
	isexit = true;
	wait();
	quit();
}

void XVideoThread::run()
{
	Mat mat1;
	while (true)
	{
		mutex.lock();
		//判断线程是否结束
		if (isexit)
		{
			mutex.unlock();
			break;
		}
		//判断视频是否打开
		if (!cap1.isOpened())
		{
			mutex.unlock();
			msleep(5);
			continue;
		}

		if (!isPlayer)
		{
			mutex.unlock();
			msleep(5);
			continue;
		}
		//读取一帧视频，解码并作颜色转换
		if (!cap1.read(mat1) || mat1.empty())
		{
			mutex.unlock();
			if (isWrite)
			{
				StopSave();
				SaveEnd();
			}
			
			msleep(5);
			continue;
		}
		

		//显示图像1
		if (!isWrite)
		{
			ViewImage1(mat1);
		}
		

		Mat des = XFilter::Get()->Filter(mat1,Mat());

		//显示目标图像
		if (!isWrite)
		{
			ViewDes(des);
		}
	

		int s = 1000 / fps;

		if (isWrite)
		{
			s = 1;
			vw.write(des);
		}
		msleep(s);
		mutex.unlock();
	
	}
}

bool XVideoThread::Open(const std::string file)
{
	cout << "open : " << file << endl;
	mutex.lock();
	bool re = cap1.open(file);
	mutex.unlock();
	cout << re << endl;
	if (!re)
	{
		return re;
	}
	fps = cap1.get(CAP_PROP_FPS);	
	if (fps<=0)
	{
		fps = 25;
	}
	return true;
	
}

void XVideoThread::Play()
{
	mutex.lock();
	isPlayer = true;
	mutex.unlock();
}

void XVideoThread::Pause()
{
	mutex.lock();
	isPlayer = false;
	mutex.unlock();
}

double XVideoThread::GetPos()
{
	double pos = 0.f;
	mutex.lock();
	if (!cap1.isOpened())
	{
		mutex.unlock();
		return pos;
	}
	double count = cap1.get(CAP_PROP_FRAME_COUNT);
	double cur = cap1.get(CAP_PROP_POS_FRAMES);
	if (count>0.001)
		pos = cur / count;
	if (cur == count)
	{
		mutex.unlock();
		return -1;
	}
	mutex.unlock();
	return pos;

}

bool XVideoThread::Seek(int frame)
{
	mutex.lock();
	if (!cap1.isOpened())
	{
		mutex.unlock();
		return false;
	}
	int re = cap1.set(CAP_PROP_POS_FRAMES, frame);
	mutex.unlock();
	return true;
}

bool XVideoThread::Seek(double pos)
{
	double count = cap1.get(CAP_PROP_FRAME_COUNT);
	int frame = pos*count;
	return Seek(frame);
}

bool XVideoThread::StartSave(const std::string filename, int height /*= 0*/, int width /*= 0*/)
{
	Seek(0);
	mutex.lock();
	if (!cap1.isOpened())
	{
		return false; 
	}
	if (width<=0)
	{
		width = cap1.get(CAP_PROP_FRAME_WIDTH);
	}
	if (height<=0)
	{
		height = cap1.get(CAP_PROP_FRAME_HEIGHT);
	}
	vw.open(filename, VideoWriter::fourcc('X', '2', '6', '4'), fps, Size(width, height));
	if (!vw.isOpened())
	{
		cout << "start save false" << endl;
		mutex.unlock();
		return false;
	}
	isWrite = true;
	mutex.unlock();
	return true;
}

void XVideoThread::StopSave()
{
	mutex.lock();
	vw.release();
	isWrite = false;
	mutex.unlock();
}
