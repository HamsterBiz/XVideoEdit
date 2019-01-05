#include "XFilter.h"
#include "XImagePro.h"
#include <QMutex>

class CXFlilter : public XFilter
{
public:
	QMutex mutex;
	std::vector<XTask> tasks;
	virtual cv::Mat Filter(cv::Mat mat1, cv::Mat mat2);
	virtual void Add(XTask task);
	virtual void Clear();
};

cv::Mat CXFlilter::Filter(cv::Mat mat1, cv::Mat mat2)
{
	mutex.lock();

	XImagePro p;
	p.Set(mat1, mat2);
	for (int i = 0; i<tasks.size();i++)
	{
		switch (tasks[i].type)
		{
		case XTask_Gain:
			p.Gain(tasks[i].para[0], tasks[i].para[1]);
			break;
		default:
			break;
		}
	}
	mutex.unlock();
	return p.Get();
}

void CXFlilter::Add(XTask task)
{
	mutex.lock();
	tasks.push_back(task);
	mutex.unlock();
}

void CXFlilter::Clear()
{
	mutex.lock();
	tasks.clear();
	mutex.unlock();
}


XFilter::XFilter()
{
}


XFilter* XFilter::Get()
{
	static CXFlilter re;
	return &re;
}

XFilter::~XFilter()
{
}

