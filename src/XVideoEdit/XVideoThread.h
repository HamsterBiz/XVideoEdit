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
	//��ʼ������Ƶ
	bool StartSave(const std::string filename, int height = 0, int width = 0);
	//ֹͣ������Ƶ��д����Ƶ֡������
	void StopSave();
protected:

signals:
	//��ʾԭ��Ƶ1ͼ��
	void ViewImage1(cv::Mat);
	//��ʾ���ɺ��ͼ��
	void ViewDes(cv::Mat);
	//������Ƶ���
	void SaveEnd();



protected:

	QMutex mutex;

	int fps = 0;
	int time = 0;
	int maxtime = 0;

	bool isWrite = false;
	bool isPlayer = false;

};

