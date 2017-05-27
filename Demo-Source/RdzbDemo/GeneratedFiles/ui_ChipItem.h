/********************************************************************************
** Form generated from reading UI file 'ChipItem.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHIPITEM_H
#define UI_CHIPITEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <crangeslider.h>

QT_BEGIN_NAMESPACE

class Ui_ChipItem
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *chkHideChip;
    QPushButton *pushButton_Revise_Txt;
    QPushButton *butMiddle;
    QPushButton *butScaleFull;
    QLabel *labSourceName;
    QPushButton *Up_Chip_pushButton;
    QPushButton *Down_Chip_pushButton;
    QPushButton *Close_Chip_pushButton;
    QWidget *Move_widget;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_2;
    QPushButton *butPlay;
    QPushButton *butPause;
    QPushButton *butStop;
    CRangeSlider *widPlayProgress;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *chkMute;
    QSlider *horizontalSlider;

    void setupUi(QWidget *ChipItem)
    {
        if (ChipItem->objectName().isEmpty())
            ChipItem->setObjectName(QString::fromUtf8("ChipItem"));
        ChipItem->resize(284, 45);
        ChipItem->setMinimumSize(QSize(0, 0));
        ChipItem->setMaximumSize(QSize(16777215, 16777215));
        ChipItem->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#butMiddle{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/butMiddle.png);\n"
"}\n"
"QPushButton#butMiddle:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/butMiddle_H.png);\n"
"}\n"
"QPushButton#butMiddle:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/butMiddle_D.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#butScaleFull{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/butScaleFull.png);\n"
"}\n"
"QPushButton#butScaleFull:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/butScaleFull_H.png);\n"
"}\n"
"QPushButton#butScaleFull:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/butScaleFull_D.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#chkLockAspect{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect.png);\n"
"}\n"
"QPushButton#chkLockAspect:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect_H.png);\n"
"}\n"
"QPushButton#chkLockAspect:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect_D.png);\n"
""
                        "}\n"
"QPushButton#chkLockAspect:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect_C.png);\n"
"}\n"
"QPushButton#chkLockAspect:hover:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect_H_C.png);\n"
"}\n"
"QPushButton#chkLockAspect:disabled:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAspect_D_C.png);\n"
"}\n"
"\n"
"QPushButton#chkLockPos{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos.png);\n"
"}\n"
"QPushButton#chkLockPos:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos_H.png);\n"
"}\n"
"QPushButton#chkLockPos:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos_D.png);\n"
"}\n"
"QPushButton#chkLockPos:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos_C.png);\n"
"}\n"
"QPushButton#chkLockPos:hover:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos_H_C.png);\n"
"}\n"
"QPushButton#chkLockPos:disabled:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockPos_D_C.png)"
                        ";\n"
"}\n"
"\n"
"QPushButton#chkLockSize{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize.png);\n"
"}\n"
"QPushButton#chkLockSize:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize_H.png);\n"
"}\n"
"QPushButton#chkLockSize:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize_D.png);\n"
"}\n"
"QPushButton#chkLockSize:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize_C.png);\n"
"}\n"
"QPushButton#chkLockSize:hover:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize_H_C.png);\n"
"}\n"
"QPushButton#chkLockSize:disabled:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockSize_D_C.png);\n"
"}\n"
"\n"
"QPushButton#chkLockAngle{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle.png);\n"
"}\n"
"QPushButton#chkLockAngle:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle_H.png);\n"
"}\n"
"QPushButton#chkLockAngle:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle_D"
                        ".png);\n"
"}\n"
"QPushButton#chkLockAngle:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle_C.png);\n"
"}\n"
"QPushButton#chkLockAngle:hover:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle_H_C.png);\n"
"}\n"
"QPushButton#chkLockAngle:disabled:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkLockAngle_D_C.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#chkHideChip{\n"
"	border:none;\n"
"	border-image:url(:/Resources/ItemToolbar/chkHideChip.png);\n"
"}\n"
"QPushButton#chkHideChip:hover{\n"
"	border-image:url(:/Resources/ItemToolbar/chkHideChip_H.png);\n"
"}\n"
"QPushButton#chkHideChip:disabled{\n"
"	border-image:url(:/Resources/ItemToolbar/chkHideChip_D.png);\n"
"}\n"
"QPushButton#chkHideChip:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkHideChip_C.png);\n"
"}\n"
"QPushButton#chkHideChip:hover:checked{\n"
"	border-image:url(:/Resources/ItemToolbar/chkHideChip_H_C.png);\n"
"}\n"
"QPushButton#chkHideChip:disabled:checked{\n"
"	border-image:url(:/Resources/ItemToolba"
                        "r/chkHideChip_D_C.png);\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(ChipItem);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_3 = new QWidget(ChipItem);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(22, 22));
        label_2->setMaximumSize(QSize(22, 22));
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 0, -1);
        chkHideChip = new QPushButton(widget);
        chkHideChip->setObjectName(QString::fromUtf8("chkHideChip"));
        chkHideChip->setMinimumSize(QSize(15, 15));
        chkHideChip->setMaximumSize(QSize(15, 15));
        chkHideChip->setStyleSheet(QString::fromUtf8("QPushButton#chkHideChip{\n"
"	\n"
"	color: rgb(254, 161, 24);\n"
"	border:none;\n"
"	border-image: url(:/Chip_chkHide/Resources/Chip/chkHideChip.png);\n"
"}\n"
"QPushButton#chkHideChip:hover{\n"
"	border-image:url(:/Chip_chkHide/Resources/Chip/chkHideChip_H.png);\n"
"}\n"
"QPushButton#chkHideChip:disabled{\n"
"	border-image:url(:/Chip_chkHide/Resources/Chip/chkHideChip_D.png);\n"
"}\n"
"QPushButton#chkHideChip:checked{\n"
"	border-image:url(:/Chip_chkHide/Resources/Chip/chkHideChip_C.png);\n"
"}\n"
"QPushButton#chkHideChip:hover:checked{\n"
"	border-image:url(:/Chip_chkHide/Resources/Chip/chkHideChip_H_C.png);\n"
"}\n"
"QPushButton#chkHideChip:disabled:checked{\n"
"	border-image:url(:/Chip_chkHide/Resources/Chip/chkHideChip_D_C.png);\n"
"}"));
        chkHideChip->setCheckable(true);

        horizontalLayout->addWidget(chkHideChip);

        pushButton_Revise_Txt = new QPushButton(widget);
        pushButton_Revise_Txt->setObjectName(QString::fromUtf8("pushButton_Revise_Txt"));
        pushButton_Revise_Txt->setMinimumSize(QSize(16, 16));
        pushButton_Revise_Txt->setMaximumSize(QSize(16, 16));
        pushButton_Revise_Txt->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image: url(:/RdzbDemo/Resources/Chip/Captions.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border-image: url(:/RdzbDemo/Resources/Chip/Captions_H.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	\n"
"	border-image: url(:/RdzbDemo/Resources/Chip/Captions_D.png);\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_Revise_Txt);

        butMiddle = new QPushButton(widget);
        butMiddle->setObjectName(QString::fromUtf8("butMiddle"));
        butMiddle->setMinimumSize(QSize(15, 15));
        butMiddle->setMaximumSize(QSize(15, 15));
        butMiddle->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#butMiddle{\n"
"	color: rgb(254, 161, 24);\n"
"	border:none;\n"
"	border-image: url(:/Chip_Middle/Resources/Chip/butMiddle.png);\n"
"}\n"
"QPushButton#butMiddle:hover{\n"
"	border-image:url(:/Chip_Middle/Resources/Chip/butMiddle_H.png);\n"
"}\n"
"QPushButton#butMiddle:disabled{\n"
"	border-image:url(:/Chip_Middle/Resources/Chip/butMiddle_D.png);\n"
"}"));

        horizontalLayout->addWidget(butMiddle);

        butScaleFull = new QPushButton(widget);
        butScaleFull->setObjectName(QString::fromUtf8("butScaleFull"));
        butScaleFull->setMinimumSize(QSize(15, 15));
        butScaleFull->setMaximumSize(QSize(15, 15));
        butScaleFull->setStyleSheet(QString::fromUtf8("QPushButton#butScaleFull{\n"
"	color: rgb(254, 161, 24);\n"
"	image: url(:/Chip_ScaleFull/Resources/Chip/butScaleFull.png);\n"
"}\n"
"QPushButton#butScaleFull:hover{\n"
"	border-image: url(:/Chip_ScaleFull/Resources/Chip/butScaleFull_H.png);\n"
"}\n"
"QPushButton#butScaleFull:disabled{\n"
"	border-image:url(:/Chip_ScaleFull/Resources/Chip/butScaleFull_D.png);\n"
"}"));

        horizontalLayout->addWidget(butScaleFull);

        labSourceName = new QLabel(widget);
        labSourceName->setObjectName(QString::fromUtf8("labSourceName"));
        labSourceName->setStyleSheet(QString::fromUtf8("color: rgb(255, 162, 0);\n"
"font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(labSourceName);

        Up_Chip_pushButton = new QPushButton(widget);
        Up_Chip_pushButton->setObjectName(QString::fromUtf8("Up_Chip_pushButton"));
        Up_Chip_pushButton->setMinimumSize(QSize(20, 20));
        Up_Chip_pushButton->setMaximumSize(QSize(20, 20));
        Up_Chip_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Up_Chip_pushButton{\n"
"	border:none;\n"
"	border-image: url(:/Chip_Up/Resources/Chip/butUpChip.png);\n"
"}\n"
"QPushButton#Up_Chip_pushButton:hover{\n"
"	border-image: url(:/Chip_Up/Resources/Chip/butUpChip_H.png);\n"
"}\n"
"QPushButton#Up_Chip_pushButton:disabled{\n"
"	border-image: url(:/Chip_Up/Resources/Chip/butUpChip_D.png);\n"
"}"));

        horizontalLayout->addWidget(Up_Chip_pushButton);

        Down_Chip_pushButton = new QPushButton(widget);
        Down_Chip_pushButton->setObjectName(QString::fromUtf8("Down_Chip_pushButton"));
        Down_Chip_pushButton->setMinimumSize(QSize(20, 20));
        Down_Chip_pushButton->setMaximumSize(QSize(20, 20));
        Down_Chip_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Down_Chip_pushButton{\n"
"	border:none;\n"
"	border-image: url(:/Chip_Down/Resources/Chip/butDownChip.png);\n"
"}\n"
"QPushButton#Down_Chip_pushButton:hover{\n"
"	border-image: url(:/Chip_Down/Resources/Chip/butDownChip_H.png);\n"
"}\n"
"QPushButton#Down_Chip_pushButton:disabled{\n"
"	border-image: url(:/Chip_Down/Resources/Chip/butDownChip_D.png);\n"
"}"));

        horizontalLayout->addWidget(Down_Chip_pushButton);

        Close_Chip_pushButton = new QPushButton(widget);
        Close_Chip_pushButton->setObjectName(QString::fromUtf8("Close_Chip_pushButton"));
        Close_Chip_pushButton->setMinimumSize(QSize(20, 20));
        Close_Chip_pushButton->setMaximumSize(QSize(20, 20));
        Close_Chip_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Close_Chip_pushButton{\n"
"	border:none;\n"
"	border-image: url(:/Chip_Close/Resources/Chip/butCloseChip.png);\n"
"}\n"
"QPushButton#Close_Chip_pushButton:hover{\n"
"	border-image: url(:/Chip_Close/Resources/Chip/butCloseChip_H.png);\n"
"}\n"
"QPushButton#Close_Chip_pushButton:disabled{\n"
"	border-image: url(:/Chip_Close/Resources/Chip/butCloseChip_D.png);\n"
"}"));

        horizontalLayout->addWidget(Close_Chip_pushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        Move_widget = new QWidget(widget_3);
        Move_widget->setObjectName(QString::fromUtf8("Move_widget"));
        Move_widget->setMinimumSize(QSize(0, 15));
        Move_widget->setMaximumSize(QSize(16777215, 15));
        Move_widget->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#butPlay{\n"
"	border:none;\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPlay.png);\n"
"}\n"
"QPushButton#butPlay:hover{\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPlay_H.png);\n"
"}\n"
"QPushButton#butPlay:disabled{\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPlay_D.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#butPause{\n"
"	border:none;\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPause.png);\n"
"}\n"
"QPushButton#butPause:hover{\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPause_H.png);\n"
"}\n"
"QPushButton#butPause:disabled{\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butPause_D.png);\n"
"}\n"
"\n"
"QPushButton#butUsePlayRange{\n"
"	border:none;\n"
"	color: blue;\n"
"}\n"
"QPushButton#butSetPlayRange{\n"
"	border:none;\n"
"	color: blue;\n"
"}\n"
"\n"
"QPushButton#butStop{\n"
"	border:none;\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butStop.png);\n"
"}\n"
"QPushButton#butStop:hover{\n"
"	border-image:url(:/RdzbDemo/Resources/Ite"
                        "mOper/butStop_H.png);\n"
"}\n"
"QPushButton#butStop:disabled{\n"
"	border-image:url(:/RdzbDemo/Resources/ItemOper/butStop_D.png);\n"
"}\n"
"\n"
"QPushButton#chkMute{\n"
"	border:none;\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker.png\");\n"
"}\n"
"QPushButton#chkMute:hover{\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker_H.png\");\n"
"}\n"
"QPushButton#chkMute:disabled{\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker_D.png\");\n"
"}\n"
"QPushButton#chkMute:checked{\n"
"	border:none;\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker_C.png\");\n"
"}\n"
"QPushButton#chkMute:hover:checked{\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker_H_C.png\");\n"
"}\n"
"QPushButton#chkMute:disabled:checked{\n"
"	border-image:url(\":/RdzbDemo/Resources/ItemOper/chkSpeaker_D_C.png\");\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(Move_widget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        widget_4 = new QWidget(Move_widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(30, 15));
        widget_4->setMaximumSize(QSize(30, 15));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 2, 0);
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(15, 15));
        widget_2->setMaximumSize(QSize(15, 15));
        butPlay = new QPushButton(widget_2);
        butPlay->setObjectName(QString::fromUtf8("butPlay"));
        butPlay->setEnabled(true);
        butPlay->setGeometry(QRect(0, 0, 15, 15));
        butPlay->setMinimumSize(QSize(15, 15));
        butPlay->setMaximumSize(QSize(15, 15));
        butPause = new QPushButton(widget_2);
        butPause->setObjectName(QString::fromUtf8("butPause"));
        butPause->setEnabled(false);
        butPause->setGeometry(QRect(0, 0, 15, 15));
        butPause->setMinimumSize(QSize(15, 15));
        butPause->setMaximumSize(QSize(15, 15));
        butPause->raise();
        butPlay->raise();

        horizontalLayout_3->addWidget(widget_2);

        butStop = new QPushButton(widget_4);
        butStop->setObjectName(QString::fromUtf8("butStop"));
        butStop->setEnabled(false);
        butStop->setMinimumSize(QSize(15, 15));
        butStop->setMaximumSize(QSize(15, 15));

        horizontalLayout_3->addWidget(butStop);


        horizontalLayout_5->addWidget(widget_4);

        widPlayProgress = new CRangeSlider(Move_widget);
        widPlayProgress->setObjectName(QString::fromUtf8("widPlayProgress"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widPlayProgress->sizePolicy().hasHeightForWidth());
        widPlayProgress->setSizePolicy(sizePolicy);
        widPlayProgress->setMinimumSize(QSize(150, 0));
        widPlayProgress->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(widPlayProgress);

        widget_5 = new QWidget(Move_widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(65, 15));
        widget_5->setMaximumSize(QSize(60, 15));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 0, 0, 0);
        chkMute = new QPushButton(widget_5);
        chkMute->setObjectName(QString::fromUtf8("chkMute"));
        chkMute->setMinimumSize(QSize(15, 15));
        chkMute->setMaximumSize(QSize(15, 15));
        chkMute->setCheckable(true);
        chkMute->setChecked(false);

        horizontalLayout_4->addWidget(chkMute);

        horizontalSlider = new QSlider(widget_5);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setMinimumSize(QSize(45, 0));
        horizontalSlider->setMaximumSize(QSize(45, 16777215));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider  \n"
"{  \n"
"}  \n"
"  \n"
"QSlider::groove:horizontal  \n"
"{  \n"
"    height: 2px;  \n"
"	border-image: url(:/Audio/Resources/Audio/VolumeTrack.png);\n"
"    margin: 2px 0  \n"
"}  \n"
"\n"
" QSlider::sub-page:horizontal \n"
"{\n"
"	height: 2px;  \n"
"    border-image: url(:/Audio/Resources/Audio/VolumeProgress.png);\n"
"	margin: 2px 0  \n"
"}\n"
"\n"
" QSlider::handle:horizontal {\n"
"     width: 10px;\n"
"	 height:5px;\n"
"     margin: 5px px 5px px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere.png);\n"
"     margin: -4 0px; /* expand outside the groove */\n"
" }\n"
"\n"
" QSlider::handle:horizontal:hover {\n"
"    width: 10px;\n"
"	 height:5px;\n"
"     margin: 5px px 5px px;    \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_H.png);\n"
"     margin: -4 0px; /* expand outside the groove */\n"
" }\n"
"\n"
"QSlider::handle:horizontal:checked\n"
"{\n"
"	 width: 10px;\n"
"	 height:5px;\n"
"     margin: 5px px 5px px;   \n"
"	 border-image: url(:/Audio/Resources/Audi"
                        "o/volume_sphere_C.png);\n"
"     margin: -4 0px; /* expand outside the groove */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled\n"
"{\n"
"	 width: 10px;\n"
"	 height:5px;\n"
"     margin: 5px px 5px px;    \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_D.png);\n"
"      margin: -4 0px; /* expand outside the groove */\n"
"}"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);


        horizontalLayout_5->addWidget(widget_5);


        gridLayout->addWidget(Move_widget, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);


        horizontalLayout_2->addWidget(widget_3);


        retranslateUi(ChipItem);

        QMetaObject::connectSlotsByName(ChipItem);
    } // setupUi

    void retranslateUi(QWidget *ChipItem)
    {
        ChipItem->setWindowTitle(QApplication::translate("ChipItem", "ChipItem", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        chkHideChip->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        chkHideChip->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_Revise_Txt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_Revise_Txt->setText(QString());
#ifndef QT_NO_TOOLTIP
        butMiddle->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        butMiddle->setText(QString());
#ifndef QT_NO_TOOLTIP
        butScaleFull->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labSourceName->setText(QString());
#ifndef QT_NO_TOOLTIP
        Up_Chip_pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Up_Chip_pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        Down_Chip_pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Down_Chip_pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        Close_Chip_pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Close_Chip_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChipItem: public Ui_ChipItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIPITEM_H
