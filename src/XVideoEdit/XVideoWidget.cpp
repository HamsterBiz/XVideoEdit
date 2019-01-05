#include "XVideoWidget.h"
#include <QPainter>
#include <opencv2/imgproc.hpp>
using namespace cv;

XVideoWidget::XVideoWidget(QWidget*p):QOpenGLWidget(p)
{

}

XVideoWidget::~XVideoWidget()
{
}

void XVideoWidget::paintEvent(QPaintEvent *e)
{
	QPainter p;
	p.begin(this);
	p.drawImage(QPoint(0,0),image);
	p.end();

}

void XVideoWidget::SetImage(cv::Mat mat)
{
	if (image.isNull())
	{
		uchar *buff = new uchar[width()*height() * 3];
		image = QImage(buff, width(), height(), QImage::Format_RGB888);
	}
	Mat des;
	cv::resize(mat, des, Size(image.size().width(), image.size().height()));
	cv::cvtColor(des, des, COLOR_BGR2RGB);
	memcpy(image.bits(), des.data, des.cols*des.rows*mat.elemSize());
	update();
}
