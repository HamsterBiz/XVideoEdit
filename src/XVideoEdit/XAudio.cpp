#include "XAudio.h"
#include <iostream>
#include <QMutex>
using namespace std;
class CXAudio:public XAudio
{
	QMutex mutex;
public:

	virtual bool ExportA(std::string src, std::string out)override
	{
		//ffmpeg -i test.mp4  -ss 0:1:10.112 -t 0:1:10.100 -vn -y test.mp3

		string cmd = "ffmpeg ";
		cmd += " -i ";
		cmd += src;
		cmd += " ";

		cmd += " -vn -y ";
		cmd += out;
		cout << cmd << endl;
		mutex.lock();
		system(cmd.c_str());
		mutex.unlock();
		return true;
	}
	virtual void PlayAudio(std::string src)override
	{
		string cmd = "ffplay ";
		cmd += " -i ";
		cmd += src;
		mutex.lock();
		system(cmd.c_str());
		mutex.unlock();
	}
};


XAudio::XAudio()
{
}


XAudio::~XAudio()
{
}

XAudio* XAudio::Get()
{
	static CXAudio audio;
	return &audio;
}
