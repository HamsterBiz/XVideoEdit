#include "XVideoThread.h"
#include "XVideoWidget.h"
#include "XVideoUI.h"
#include "XFilter.h"
#include <QFileDialog>
#include <string>
#include <QMessageBox>
#include <opencv2/core.hpp>
#include <iostream>
using namespace std;


XVideoUI::XVideoUI(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);

	qRegisterMetaType<cv::Mat>("cv::Mat");

	QObject::connect(XVideoThread::Get(),&XVideoThread::ViewImage1, ui.src1, &XVideoWidget::SetImage);

	QObject::connect(XVideoThread::Get(), &XVideoThread::ViewDes, ui.des, &XVideoWidget::SetImage);

	QObject::connect(XVideoThread::Get(), &XVideoThread::SaveEnd, this, &XVideoUI::ExportEnd);

	Pause();
	startTimer(40);
}

void XVideoUI::timerEvent(QTimerEvent *event)
{
	if (pressSlider)
	{
		return;
	}
	double pos = XVideoThread::Get()->GetPos();
	if (pos == -1)
	{
		SetPos(0);
	}
	ui.playSlider->setValue(pos*1000);
}

void XVideoUI::Open()
{
	QString name = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择视频文件"));
	if (name.isEmpty())
	{
		return;
	}
	string file = name.toLocal8Bit().data();
	if (!XVideoThread::Get()->Open(file))
	{
		QMessageBox::information(this, "erro", name + "open failed");
		return;
	}
	Play();
}

void XVideoUI::Play()
{
	ui.pauseButton->show();
	ui.pauseButton->setGeometry(ui.playButton->geometry());
	XVideoThread::Get()->Play();
	ui.playButton->hide();
}

void XVideoUI::Pause()
{
	ui.playButton->show();
	ui.pauseButton->hide();
	XVideoThread::Get()->Pause();
}

void XVideoUI::SliderPress()
{
	pressSlider = true;
}

void XVideoUI::SliderRelease()
{
	pressSlider = false;
}

void XVideoUI::SetPos(int pos)
{
	XVideoThread::Get()->Seek((double)pos/1000.f);
}

void XVideoUI::Set()
{
	//对比度和亮度
	if (ui.bright->value()>0 || ui.contrast->value()>1)
	{
		XFilter::Get()->Clear();
		XFilter::Get()->Add(XTask{ XTask_Gain,{(double)ui.bright->value(),
			ui.contrast->value()} });
	}

}

void XVideoUI::Export()
{
	static bool isExport = false;
	//停止导出
	if (isExport)
	{
		XVideoThread::Get()->StopSave();
		isExport = false;
		ui.exportButton->setText("start export");
		return;
	}
	//开始导出
	QString name = QFileDialog::getSaveFileName(this, "save",
		"out1.avi");
	if (name.isEmpty())
	{
		return;
	}
	std::string filename = name.toLocal8Bit().data();
	if (XVideoThread::Get()->StartSave(filename))
	{
		isExport = true;
		ui.exportButton->setText("stop export");
	}
}

void XVideoUI::ExportEnd()
{
	QMessageBox::information(this, QString::fromLocal8Bit("提示"),
		QString::fromLocal8Bit("导出完成"));
}
