#pragma once
#include <opencv2/core.hpp>
class XImagePro
{
public:
	XImagePro();
	virtual ~XImagePro();

	//����ԭͼ��������ԭ���Ĵ�����
	void Set(cv::Mat mat1,cv::Mat mat2);

	//�������ȺͶԱȶ�
	///@para bright double ���� 0~100
	///@para contrast int �Աȶ� 1.0-3.0
	void Gain(double, double);

	//��ȡ�����Ľ��
	cv::Mat Get() { return des; }

protected:

	//ԭͼ
	cv::Mat src1;
	cv::Mat src2;
	cv::Mat des;
};

