#include "XImagePro.h"



XImagePro::XImagePro()
{
}


XImagePro::~XImagePro()
{
}

void XImagePro::Set(cv::Mat mat1, cv::Mat mat2)
{
	if (mat1.empty())
	{
		return;
	}
	src1 = mat1;
	src2 = mat2;
	src1.copyTo(des);
}

void XImagePro::Gain(double bright, double contrast)
{
	if (des.empty())
		return;
	des.convertTo(des, -1, contrast, bright);
}
