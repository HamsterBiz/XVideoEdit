#include "XVideoUI.h"
#include <QtWidgets/QApplication>
#include "XAudio.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	XVideoUI w;
	w.show();
	return a.exec();
}
