#pragma once

#include <QOpenGLWidget>
#include <opencv2/core.hpp>
#include <QImage>
class XVideoWidget:public QOpenGLWidget
{
	Q_OBJECT

public:
	XVideoWidget(QWidget*p);
	virtual ~XVideoWidget();
	virtual void paintEvent(QPaintEvent *e);

public slots:

	void SetImage(cv::Mat mat);

protected:
	QImage image;
};

