#pragma once
#include<QThread>
#include<string>
#include <QMutex>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

class XVideoThread:public QThread
{
	Q_OBJECT

protected:
	XVideoThread();
	virtual ~XVideoThread();

public:

	static XVideoThread*Get()
	{
		static XVideoThread vt;
		return &vt;
	}

public:

	virtual void run()override;

	bool Open(const std::string file);
	void Play();
	void Pause();
	double GetPos();
	bool Seek(int frame);
	bool Seek(double pos);
	//开始保存视频
	bool StartSave(const std::string filename, int height = 0, int width = 0);
	//停止保存视频，写入视频帧的索引
	void StopSave();
protected:

signals:
	//显示原视频1图像
	void ViewImage1(cv::Mat);
	//显示生成后的图像
	void ViewDes(cv::Mat);
	//导出视频完成
	void SaveEnd();



protected:

	QMutex mutex;

	int fps = 0;
	int time = 0;
	int maxtime = 0;

	bool isWrite = false;
	bool isPlayer = false;

};

