#pragma once
#include <opencv2/core.hpp>
class XImagePro
{
public:
	XImagePro();
	virtual ~XImagePro();

	//设置原图，会清理原来的处理结果
	void Set(cv::Mat mat1,cv::Mat mat2);

	//设置亮度和对比度
	///@para bright double 亮度 0~100
	///@para contrast int 对比度 1.0-3.0
	void Gain(double, double);

	//获取处理后的结果
	cv::Mat Get() { return des; }

protected:

	//原图
	cv::Mat src1;
	cv::Mat src2;
	cv::Mat des;
};

