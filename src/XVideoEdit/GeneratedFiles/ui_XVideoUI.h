/********************************************************************************
** Form generated from reading UI file 'XVideoUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVIDEOUI_H
#define UI_XVIDEOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "xvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_XVideoUIClass
{
public:
    QPushButton *closeButton;
    XVideoWidget *src1;
    QPushButton *openButton;
    QSlider *playSlider;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *bright;
    QDoubleSpinBox *contrast;
    QPushButton *setButton;
    XVideoWidget *des;
    QPushButton *exportButton;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QLabel *label_3;
    QComboBox *rotate;
    QComboBox *flip;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *width;
    QSpinBox *height;
    QLabel *label_6;
    QSpinBox *pyup;
    QSpinBox *pydown;
    QLabel *label_7;
    QSpinBox *cy;
    QSpinBox *cx;
    QSpinBox *ch;
    QSpinBox *cw;
    QComboBox *color;
    QPushButton *markButton;
    QSpinBox *mx;
    QSpinBox *my;
    QDoubleSpinBox *ma;
    XVideoWidget *src2;
    QPushButton *blendButton;
    QDoubleSpinBox *ba;
    QPushButton *mergeButton;
    QSlider *left;
    QSlider *right;

    void setupUi(QWidget *XVideoUIClass)
    {
        if (XVideoUIClass->objectName().isEmpty())
            XVideoUIClass->setObjectName(QStringLiteral("XVideoUIClass"));
        XVideoUIClass->resize(802, 601);
        XVideoUIClass->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(120, 120, 120, 255), stop:0.495 rgba(39, 39, 39, 255), stop:0.505 rgba(39,39, 39, 255), stop:1 rgba(120, 120,120, 255));\n"
" border: none;\n"
"border-radius:5px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"QPushButton:!hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(39, 39, 39, 255), stop:0.495 rgba(120, 120, 120, 255), stop:0.505 rgba(120,120, 120, 255), stop:1 rgba(39, 39,39, 255));\n"
" border: none;\n"
"border-radius:5px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"#XVideoUIClass\n"
"{\n"
"	background-color: rgb(53, 53, 53);\n"
"}\n"
"#closeButton\n"
"{\n"
"font: 75 11pt \"\347\255\211\347\272\277\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(53, 53, 53);\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 75 12pt "
                        "\"\351\273\221\344\275\223\";\n"
"}\n"
"\n"
"#playButton{background-color: rgba(255, 255, 255, 0);}\n"
"\n"
"#playButton:!hover{ image: url(:/XVideoUI/Resources/PlayN.png);}\n"
"#playButton:hover{ image: url(:/XVideoUI/Resources/PlayH.png);}\n"
"\n"
"#playButton:pressed{ image: url(:/XVideoUI/Resources/PlayP.png);}\n"
"\n"
"#pauseButton{background-color: rgba(255, 255, 255, 0);}\n"
"\n"
"#pauseButton:!hover{ image: url(:/XVideoUI/Resources/PauseN.png);}\n"
"#pauseButton:hover{ image: url(:/XVideoUI/Resources/PauseH.png);}\n"
"\n"
"#pauseButton:pressed{ image: url(:/XVideoUI/Resources/PauseP.png);}\n"
"\n"
"\n"
"\n"
""));
        closeButton = new QPushButton(XVideoUIClass);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(770, 0, 31, 21));
        closeButton->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        closeButton->setFlat(true);
        src1 = new XVideoWidget(XVideoUIClass);
        src1->setObjectName(QStringLiteral("src1"));
        src1->setGeometry(QRect(10, 20, 380, 271));
        openButton = new QPushButton(XVideoUIClass);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(430, 310, 71, 41));
        playSlider = new QSlider(XVideoUIClass);
        playSlider->setObjectName(QStringLiteral("playSlider"));
        playSlider->setGeometry(QRect(10, 310, 381, 16));
        playSlider->setMaximum(999);
        playSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(XVideoUIClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 360, 91, 31));
        label_2 = new QLabel(XVideoUIClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 390, 121, 31));
        bright = new QSpinBox(XVideoUIClass);
        bright->setObjectName(QStringLiteral("bright"));
        bright->setGeometry(QRect(510, 360, 141, 22));
        contrast = new QDoubleSpinBox(XVideoUIClass);
        contrast->setObjectName(QStringLiteral("contrast"));
        contrast->setGeometry(QRect(510, 390, 141, 22));
        contrast->setMinimum(1);
        contrast->setMaximum(3);
        setButton = new QPushButton(XVideoUIClass);
        setButton->setObjectName(QStringLiteral("setButton"));
        setButton->setGeometry(QRect(690, 360, 71, 41));
        des = new XVideoWidget(XVideoUIClass);
        des->setObjectName(QStringLiteral("des"));
        des->setGeometry(QRect(400, 20, 380, 271));
        exportButton = new QPushButton(XVideoUIClass);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setGeometry(QRect(520, 310, 101, 41));
        playButton = new QPushButton(XVideoUIClass);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(170, 340, 41, 41));
        pauseButton = new QPushButton(XVideoUIClass);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(220, 340, 41, 41));
        label_3 = new QLabel(XVideoUIClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 420, 71, 31));
        rotate = new QComboBox(XVideoUIClass);
        rotate->setObjectName(QStringLiteral("rotate"));
        rotate->setGeometry(QRect(510, 430, 141, 22));
        flip = new QComboBox(XVideoUIClass);
        flip->setObjectName(QStringLiteral("flip"));
        flip->setGeometry(QRect(510, 460, 141, 22));
        label_4 = new QLabel(XVideoUIClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 450, 71, 31));
        label_5 = new QLabel(XVideoUIClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 480, 91, 31));
        width = new QSpinBox(XVideoUIClass);
        width->setObjectName(QStringLiteral("width"));
        width->setGeometry(QRect(510, 490, 71, 22));
        width->setMaximum(99999);
        height = new QSpinBox(XVideoUIClass);
        height->setObjectName(QStringLiteral("height"));
        height->setGeometry(QRect(580, 490, 71, 22));
        height->setMaximum(9999);
        label_6 = new QLabel(XVideoUIClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 520, 221, 31));
        pyup = new QSpinBox(XVideoUIClass);
        pyup->setObjectName(QStringLiteral("pyup"));
        pyup->setGeometry(QRect(580, 520, 71, 22));
        pyup->setMaximum(100);
        pydown = new QSpinBox(XVideoUIClass);
        pydown->setObjectName(QStringLiteral("pydown"));
        pydown->setGeometry(QRect(510, 520, 71, 22));
        pydown->setMaximum(100);
        label_7 = new QLabel(XVideoUIClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 550, 221, 31));
        cy = new QSpinBox(XVideoUIClass);
        cy->setObjectName(QStringLiteral("cy"));
        cy->setGeometry(QRect(580, 550, 71, 22));
        cy->setMaximum(9999);
        cx = new QSpinBox(XVideoUIClass);
        cx->setObjectName(QStringLiteral("cx"));
        cx->setGeometry(QRect(510, 550, 71, 22));
        cx->setMaximum(9999);
        ch = new QSpinBox(XVideoUIClass);
        ch->setObjectName(QStringLiteral("ch"));
        ch->setGeometry(QRect(720, 550, 71, 22));
        ch->setMaximum(9999);
        cw = new QSpinBox(XVideoUIClass);
        cw->setObjectName(QStringLiteral("cw"));
        cw->setGeometry(QRect(650, 550, 71, 22));
        cw->setMaximum(9999);
        color = new QComboBox(XVideoUIClass);
        color->setObjectName(QStringLiteral("color"));
        color->setGeometry(QRect(680, 430, 91, 22));
        markButton = new QPushButton(XVideoUIClass);
        markButton->setObjectName(QStringLiteral("markButton"));
        markButton->setGeometry(QRect(0, 380, 81, 31));
        mx = new QSpinBox(XVideoUIClass);
        mx->setObjectName(QStringLiteral("mx"));
        mx->setGeometry(QRect(90, 390, 71, 22));
        mx->setMaximum(9999);
        my = new QSpinBox(XVideoUIClass);
        my->setObjectName(QStringLiteral("my"));
        my->setGeometry(QRect(160, 390, 71, 22));
        my->setMaximum(9999);
        ma = new QDoubleSpinBox(XVideoUIClass);
        ma->setObjectName(QStringLiteral("ma"));
        ma->setGeometry(QRect(230, 390, 71, 22));
        ma->setMinimum(0);
        ma->setMaximum(1);
        src2 = new XVideoWidget(XVideoUIClass);
        src2->setObjectName(QStringLiteral("src2"));
        src2->setGeometry(QRect(10, 420, 240, 171));
        blendButton = new QPushButton(XVideoUIClass);
        blendButton->setObjectName(QStringLiteral("blendButton"));
        blendButton->setGeometry(QRect(260, 420, 51, 31));
        ba = new QDoubleSpinBox(XVideoUIClass);
        ba->setObjectName(QStringLiteral("ba"));
        ba->setGeometry(QRect(320, 420, 61, 22));
        ba->setMinimum(0);
        ba->setMaximum(1);
        ba->setValue(0.5);
        mergeButton = new QPushButton(XVideoUIClass);
        mergeButton->setObjectName(QStringLiteral("mergeButton"));
        mergeButton->setGeometry(QRect(260, 460, 51, 31));
        left = new QSlider(XVideoUIClass);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(10, 292, 381, 16));
        left->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"background:  rgb(0, 170, 255);\n"
"border-radius: 5px;\n"
"}\n"
""));
        left->setMaximum(999);
        left->setOrientation(Qt::Horizontal);
        right = new QSlider(XVideoUIClass);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(10, 328, 381, 16));
        right->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"background:  rgb(0, 170, 255);\n"
"border-radius: 5px;\n"
"}\n"
""));
        right->setMaximum(999);
        right->setValue(999);
        right->setOrientation(Qt::Horizontal);

        retranslateUi(XVideoUIClass);
        QObject::connect(closeButton, SIGNAL(clicked()), XVideoUIClass, SLOT(close()));
        QObject::connect(openButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Open()));
        QObject::connect(playSlider, SIGNAL(sliderPressed()), XVideoUIClass, SLOT(SliderPress()));
        QObject::connect(playSlider, SIGNAL(sliderReleased()), XVideoUIClass, SLOT(SliderRelease()));
        QObject::connect(playSlider, SIGNAL(sliderMoved(int)), XVideoUIClass, SLOT(SetPos(int)));
        QObject::connect(setButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Set()));
        QObject::connect(exportButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Export()));
        QObject::connect(playButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Play()));
        QObject::connect(pauseButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Pause()));
        QObject::connect(markButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Mark()));
        QObject::connect(blendButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Blend()));
        QObject::connect(mergeButton, SIGNAL(clicked()), XVideoUIClass, SLOT(Merge()));
        QObject::connect(left, SIGNAL(sliderMoved(int)), XVideoUIClass, SLOT(Left(int)));
        QObject::connect(right, SIGNAL(sliderMoved(int)), XVideoUIClass, SLOT(Right(int)));

        QMetaObject::connectSlotsByName(XVideoUIClass);
    } // setupUi

    void retranslateUi(QWidget *XVideoUIClass)
    {
        XVideoUIClass->setWindowTitle(QApplication::translate("XVideoUIClass", "XVideoUI", Q_NULLPTR));
        closeButton->setText(QApplication::translate("XVideoUIClass", "X", Q_NULLPTR));
        openButton->setText(QApplication::translate("XVideoUIClass", "\346\211\223\345\274\200", Q_NULLPTR));
        label->setText(QApplication::translate("XVideoUIClass", "\344\272\256\345\272\246[0-100]", Q_NULLPTR));
        label_2->setText(QApplication::translate("XVideoUIClass", "\345\257\271\346\257\224\345\272\246[1.0-3.0]", Q_NULLPTR));
        setButton->setText(QApplication::translate("XVideoUIClass", "\350\256\276\347\275\256", Q_NULLPTR));
        exportButton->setText(QApplication::translate("XVideoUIClass", "\345\257\274\345\207\272", Q_NULLPTR));
        playButton->setText(QString());
        pauseButton->setText(QString());
        label_3->setText(QApplication::translate("XVideoUIClass", "\345\233\276\345\203\217\346\227\213\350\275\254", Q_NULLPTR));
        rotate->clear();
        rotate->insertItems(0, QStringList()
         << QApplication::translate("XVideoUIClass", "0", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "90", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "180", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "270", Q_NULLPTR)
        );
        flip->clear();
        flip->insertItems(0, QStringList()
         << QApplication::translate("XVideoUIClass", "\344\270\215\345\244\204\347\220\206", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "\344\270\212\344\270\213\351\225\234\345\203\217", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "\345\267\246\345\217\263\351\225\234\345\203\217", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "\344\270\212\344\270\213\345\267\246\345\217\263\351\225\234\345\203\217", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("XVideoUIClass", "\345\233\276\345\203\217\351\225\234\345\203\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("XVideoUIClass", "\345\233\276\345\203\217\345\260\272\345\257\270W,H", Q_NULLPTR));
        label_6->setText(QApplication::translate("XVideoUIClass", "\345\233\276\345\203\217\351\207\221\345\255\227\345\241\224\357\274\210\351\253\230\346\226\257\343\200\201\346\213\211\346\231\256\346\213\211\346\226\257\357\274\211", Q_NULLPTR));
        label_7->setText(QApplication::translate("XVideoUIClass", "\345\233\276\345\203\217\350\243\201\345\211\252\357\274\210x,y,width,height\357\274\211", Q_NULLPTR));
        color->clear();
        color->insertItems(0, QStringList()
         << QApplication::translate("XVideoUIClass", "RGB\345\233\276\345\203\217", Q_NULLPTR)
         << QApplication::translate("XVideoUIClass", "\347\201\260\345\272\246\345\233\276", Q_NULLPTR)
        );
        markButton->setText(QApplication::translate("XVideoUIClass", "\346\260\264\345\215\260x,y,a", Q_NULLPTR));
        blendButton->setText(QApplication::translate("XVideoUIClass", "\350\236\215\345\220\210", Q_NULLPTR));
        mergeButton->setText(QApplication::translate("XVideoUIClass", "\345\220\210\345\271\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XVideoUIClass: public Ui_XVideoUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVIDEOUI_H
