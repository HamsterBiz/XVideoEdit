#pragma once
#include <opencv2/core.hpp>
#include <vector>
enum XTaskType
{
	XTask_None,
	XTask_Gain,//亮度对比度调整
};
struct XTask
{
	XTaskType type;
	std::vector<double> para;
};

class XFilter
{
protected:
	XFilter();
	virtual~XFilter();

public:

	virtual cv::Mat Filter(cv::Mat mat1,cv::Mat mat2) = 0;
	virtual void Add(XTask task) = 0;
	virtual void Clear() = 0;

	static XFilter* Get();
};

