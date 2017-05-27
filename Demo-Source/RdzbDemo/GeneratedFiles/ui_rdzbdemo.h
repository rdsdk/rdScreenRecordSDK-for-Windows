/********************************************************************************
** Form generated from reading UI file 'rdzbdemo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RDZBDEMO_H
#define UI_RDZBDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <cpreviewwnd.h>
#include <qdraglistwidget.h>

QT_BEGIN_NAMESPACE

class Ui_RdzbDemoClass
{
public:
    QWidget *widget_3;
    QPushButton *Speaker_pushButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *TitleBarWidget;
    QLabel *Rdzb_label;
    QLabel *slogan_label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Operate_pushButton;
    QPushButton *Min_pushButton;
    QPushButton *Close_pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Rdzb_label_Normal1;
    QLabel *label_3;
    CPreviewWnd *Preview_widget;
    QWidget *Add_widget;
    QPushButton *Game_pushButton_select;
    QPushButton *Display_pushButton_select;
    QPushButton *Android_pushButton_select;
    QPushButton *Windows_pushButton_select;
    QPushButton *IOS_pushButton_select;
    QPushButton *Camera_pushButton_select;
    QPushButton *RTMP_pushButton_select;
    QPushButton *Video_pushButton_select;
    QPushButton *flash_pushButton_select;
    QPushButton *picture_pushButton_select;
    QPushButton *captions_pushButton_select;
    QPushButton *Video_label;
    QPushButton *Game_label;
    QPushButton *RTMP_label;
    QPushButton *Display_label;
    QPushButton *Android_label;
    QPushButton *flash_label;
    QPushButton *IOS_label;
    QPushButton *Windows_label;
    QPushButton *picture_label;
    QPushButton *Camera_label;
    QPushButton *captions_label;
    QLabel *label_4;
    QWidget *widget_4;
    QPushButton *Mobile_Game_pushButton;
    QPushButton *PC_Live_pushButton;
    QPushButton *Live_Begin_pushButton;
    QPushButton *Other_pushButton;
    QPushButton *Live_Quit_pushButton;
    QPushButton *pushButton;
    QWidget *widget_5;
    QPushButton *MIC_pushButton;
    QWidget *Speaker_widget;
    QPushButton *Checke_Speaker_pushButton;
    QSlider *Speaker_verticalSlider;
    QPushButton *Setting_pushButton;
    QPushButton *Search_pushButton;
    QWidget *MIC_widget;
    QPushButton *Checke_MIC_pushButton;
    QSlider *MIC_verticalSlider;
    QWidget *Component_widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QLabel *List_label;
    QLabel *label;
    QDragListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;

    void setupUi(QDialog *RdzbDemoClass)
    {
        if (RdzbDemoClass->objectName().isEmpty())
            RdzbDemoClass->setObjectName(QString::fromUtf8("RdzbDemoClass"));
        RdzbDemoClass->resize(1051, 557);
        RdzbDemoClass->setStyleSheet(QString::fromUtf8("QDialog#RdzbDemoClass\n"
"{\n"
"	\n"
"	border-color: rgb(10, 10, 10);\n"
"}\n"
"\n"
"QMessageBox {   border-color:#32435E; border-width:1px; border-radius: 3px;\n"
"  min-width:30px; min-height:23px;\n"
"  /*font-family:\"\345\256\213\344\275\223\";font-size:36px;*/\n"
" \n"
"	\n"
"  height: 300px;\n"
"  width: 200px;\n"
"  border: none;}\n"
"\n"
"\n"
"QScrollBar:vertical {\n"
"    background-color: rgb(39, 40, 45);\n"
"    width: 16px;\n"
"    margin: 16px 0 16px 0;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #555555;\n"
"    min-height: 16px;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: #444444;\n"
"    height: 16px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    background: #444444;\n"
"    height:  16px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    backg"
                        "round: none;\n"
"	 \n"
"}\n"
"QScrollBar:down-arrow:vertical {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 4px;\n"
"    background: #5f5f5f;\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical\n"
"{\n"
"	border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 4px;\n"
"    background: #5f5f5f;\n"
"	border-top-left-radius: 5px; \n"
"	border-top-right-radius: 5px; \n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical:hover\n"
"{\n"
"	background: #555555;\n"
"}\n"
"\n"
"QScrollBar:down-arrow:vertical:hover\n"
"{\n"
"	background: #555555;\n"
"}"));
        widget_3 = new QWidget(RdzbDemoClass);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, -1, 1051, 561));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"}"));
        Speaker_pushButton = new QPushButton(widget_3);
        Speaker_pushButton->setObjectName(QString::fromUtf8("Speaker_pushButton"));
        Speaker_pushButton->setGeometry(QRect(565, 500, 36, 36));
        Speaker_pushButton->setMinimumSize(QSize(36, 36));
        Speaker_pushButton->setMaximumSize(QSize(40, 40));
        Speaker_pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Speaker_pushButton\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Speaker.png);\n"
"}\n"
"\n"
"QPushButton#Speaker_pushButton:hover\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Speaker_H.png);\n"
"}\n"
"\n"
"QPushButton#Speaker_pushButton:disabled{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Speaker_D.png);\n"
"}\n"
"\n"
"QPushButton#Speaker_pushButton:checked\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Speaker_C.png);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(-1, 0, 721, 561));
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(721, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	background-color: rgb(70, 70, 70);\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 0, 0, 0);
        TitleBarWidget = new QWidget(widget_2);
        TitleBarWidget->setObjectName(QString::fromUtf8("TitleBarWidget"));
        TitleBarWidget->setMinimumSize(QSize(720, 60));
        TitleBarWidget->setMaximumSize(QSize(720, 60));
        TitleBarWidget->setStyleSheet(QString::fromUtf8("QWidget#TitleBarWidget\n"
"{\n"
"	background-color: rgb(39, 40, 45);\n"
"}"));
        Rdzb_label = new QLabel(TitleBarWidget);
        Rdzb_label->setObjectName(QString::fromUtf8("Rdzb_label"));
        Rdzb_label->setGeometry(QRect(10, 15, 32, 25));
        Rdzb_label->setStyleSheet(QString::fromUtf8("border-image: url(:/ICON/Resources/HeadPortrait.png);"));
        slogan_label = new QLabel(TitleBarWidget);
        slogan_label->setObjectName(QString::fromUtf8("slogan_label"));
        slogan_label->setGeometry(QRect(50, 30, 161, 21));
        slogan_label->setStyleSheet(QString::fromUtf8("color: rgb(223, 223, 223);\n"
"font: 14px \"\345\256\213\344\275\223\";"));
        layoutWidget = new QWidget(TitleBarWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(650, 0, 73, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Operate_pushButton = new QPushButton(layoutWidget);
        Operate_pushButton->setObjectName(QString::fromUtf8("Operate_pushButton"));
        Operate_pushButton->setMinimumSize(QSize(10, 10));
        Operate_pushButton->setMaximumSize(QSize(10, 10));
        Operate_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Operate_pushButton{\n"
"	\n"
"	border-image: url(:/UI/Resources/butSetting_Normal.png);\n"
"}\n"
"QPushButton#Operate_pushButton:hover{\n"
"	\n"
"	border-image: url(:/UI/Resources/butSetting_Hover.png);\n"
"}\n"
"QPushButton#Operate_pushButton:disabled{\n"
"	\n"
"	border-image: url(:/UI/Resources/butSetting_Disabled.png);\n"
"}\n"
"QPushButton#Operate_pushButton:checked{\n"
"	\n"
"	border-image: url(:/UI/Resources/butSetting_checked.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(Operate_pushButton);

        Min_pushButton = new QPushButton(layoutWidget);
        Min_pushButton->setObjectName(QString::fromUtf8("Min_pushButton"));
        Min_pushButton->setMinimumSize(QSize(11, 11));
        Min_pushButton->setMaximumSize(QSize(11, 11));
        Min_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Min_pushButton{\n"
"	\n"
"	border-image: url(:/Minimize/Resources/Minimize_Normal.png);\n"
"}\n"
"QPushButton#Min_pushButton:hover{\n"
"	\n"
"	border-image: url(:/Minimize/Resources/Minimize_Hover.png);\n"
"}\n"
"QPushButton#Min_pushButton:disabled{\n"
"	\n"
"	border-image: url(:/Minimize/Resources/Minimize_Disabled.png);\n"
"}\n"
"QPushButton#Min_pushButton:checked{\n"
"	\n"
"	border-image: url(:/Minimize/Resources/Minimize_checked.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(Min_pushButton);

        Close_pushButton = new QPushButton(layoutWidget);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setMinimumSize(QSize(10, 10));
        Close_pushButton->setMaximumSize(QSize(10, 10));
        Close_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Close_pushButton{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Normal.png);\n"
"}\n"
"QPushButton#Close_pushButton:hover{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Hover.png);\n"
"}\n"
"QPushButton#Close_pushButton:disabled{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Disabled.png);\n"
"}\n"
"QPushButton#Close_pushButton:checked{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_checked.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(Close_pushButton);

        layoutWidget1 = new QWidget(TitleBarWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 0, 200, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 10, 0, 0);
        Rdzb_label_Normal1 = new QLabel(layoutWidget1);
        Rdzb_label_Normal1->setObjectName(QString::fromUtf8("Rdzb_label_Normal1"));
        Rdzb_label_Normal1->setMinimumSize(QSize(0, 18));
        Rdzb_label_Normal1->setMaximumSize(QSize(16777215, 18));
        Rdzb_label_Normal1->setStyleSheet(QString::fromUtf8("color: rgb(255, 149, 20);\n"
"font: 75 22px \"\351\273\221\344\275\223\";"));

        horizontalLayout_4->addWidget(Rdzb_label_Normal1);


        verticalLayout_4->addWidget(TitleBarWidget);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 2));
        label_3->setMaximumSize(QSize(720, 2));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/UI/Resources/shadow.png);"));

        verticalLayout_4->addWidget(label_3);

        Preview_widget = new CPreviewWnd(widget_2);
        Preview_widget->setObjectName(QString::fromUtf8("Preview_widget"));
        Preview_widget->setMinimumSize(QSize(722, 406));
        Preview_widget->setMaximumSize(QSize(722, 406));
        Preview_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 36, 40);"));
        Add_widget = new QWidget(Preview_widget);
        Add_widget->setObjectName(QString::fromUtf8("Add_widget"));
        Add_widget->setGeometry(QRect(0, 336, 720, 80));
        Add_widget->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	background-color: rgb(33, 34, 38);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(156, 156, 156);\n"
"	border: 0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"}\n"
"\n"
"\n"
"background-color: rgb(33, 34, 38);"));
        Game_pushButton_select = new QPushButton(Add_widget);
        Game_pushButton_select->setObjectName(QString::fromUtf8("Game_pushButton_select"));
        Game_pushButton_select->setGeometry(QRect(130, 20, 30, 30));
        Game_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/heading/Resources/Game.png);\n"
"}\n"
"QPushButton:hover{\n"
"	border-image: url(:/heading/Resources/Game_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	border-image: url(:/heading/Resources/Game_C.png);\n"
"}"));
        Display_pushButton_select = new QPushButton(Add_widget);
        Display_pushButton_select->setObjectName(QString::fromUtf8("Display_pushButton_select"));
        Display_pushButton_select->setGeometry(QRect(275, 20, 30, 30));
        Display_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/Scope.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/heading/Resources/Scope_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	\n"
"	border-image: url(:/heading/Resources/Scope_C.png);\n"
"}"));
        Android_pushButton_select = new QPushButton(Add_widget);
        Android_pushButton_select->setObjectName(QString::fromUtf8("Android_pushButton_select"));
        Android_pushButton_select->setGeometry(QRect(275, 20, 30, 30));
        Android_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/heading/Resources/Adroid.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/Adroid_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/Adroid_C.png);\n"
"}"));
        Windows_pushButton_select = new QPushButton(Add_widget);
        Windows_pushButton_select->setObjectName(QString::fromUtf8("Windows_pushButton_select"));
        Windows_pushButton_select->setGeometry(QRect(420, 20, 30, 30));
        Windows_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/windows.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/windows_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/windwos_C.png);\n"
"}"));
        IOS_pushButton_select = new QPushButton(Add_widget);
        IOS_pushButton_select->setObjectName(QString::fromUtf8("IOS_pushButton_select"));
        IOS_pushButton_select->setGeometry(QRect(420, 20, 30, 30));
        IOS_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/bIOS.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/heading/Resources/bIOS_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/bIOS_C.png);\n"
"}"));
        Camera_pushButton_select = new QPushButton(Add_widget);
        Camera_pushButton_select->setObjectName(QString::fromUtf8("Camera_pushButton_select"));
        Camera_pushButton_select->setGeometry(QRect(555, 20, 30, 30));
        Camera_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/Camera.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/Camera_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/Camera_C.png);\n"
"}"));
        RTMP_pushButton_select = new QPushButton(Add_widget);
        RTMP_pushButton_select->setObjectName(QString::fromUtf8("RTMP_pushButton_select"));
        RTMP_pushButton_select->setGeometry(QRect(205, 20, 30, 30));
        RTMP_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/heading/Resources/Rtmp.png);\n"
"}\n"
"QPushButton:hover{\n"
"	border-image: url(:/heading/Resources/Rtmp_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	border-image: url(:/heading/Resources/Rtmp_C.png);\n"
"}"));
        Video_pushButton_select = new QPushButton(Add_widget);
        Video_pushButton_select->setObjectName(QString::fromUtf8("Video_pushButton_select"));
        Video_pushButton_select->setGeometry(QRect(50, 20, 30, 30));
        Video_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/heading/Resources/Movie_N.png);\n"
"}\n"
"QPushButton:hover{\n"
"	border-image: url(:/heading/Resources/Movie_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	border-image: url(:/heading/Resources/Movie_C.png);\n"
"}"));
        flash_pushButton_select = new QPushButton(Add_widget);
        flash_pushButton_select->setObjectName(QString::fromUtf8("flash_pushButton_select"));
        flash_pushButton_select->setGeometry(QRect(350, 20, 30, 30));
        flash_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/Flash.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/Flash_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/Flash_C.png);\n"
"}"));
        picture_pushButton_select = new QPushButton(Add_widget);
        picture_pushButton_select->setObjectName(QString::fromUtf8("picture_pushButton_select"));
        picture_pushButton_select->setGeometry(QRect(485, 20, 30, 30));
        picture_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/Print.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/Print_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/Print_C.png);\n"
"}"));
        captions_pushButton_select = new QPushButton(Add_widget);
        captions_pushButton_select->setObjectName(QString::fromUtf8("captions_pushButton_select"));
        captions_pushButton_select->setGeometry(QRect(640, 20, 30, 30));
        captions_pushButton_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-image: url(:/heading/Resources/Captions.png);\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	border-image: url(:/heading/Resources/Captions_H.png);\n"
"}\n"
"QPushButton:checked{\n"
"	\n"
"	border-image: url(:/heading/Resources/Captions_C.png);\n"
"}"));
        Video_label = new QPushButton(Add_widget);
        Video_label->setObjectName(QString::fromUtf8("Video_label"));
        Video_label->setGeometry(QRect(50, 50, 31, 21));
        Video_label->setStyleSheet(QString::fromUtf8(""));
        Game_label = new QPushButton(Add_widget);
        Game_label->setObjectName(QString::fromUtf8("Game_label"));
        Game_label->setGeometry(QRect(130, 50, 31, 21));
        Game_label->setStyleSheet(QString::fromUtf8(""));
        RTMP_label = new QPushButton(Add_widget);
        RTMP_label->setObjectName(QString::fromUtf8("RTMP_label"));
        RTMP_label->setGeometry(QRect(200, 50, 41, 21));
        RTMP_label->setStyleSheet(QString::fromUtf8(""));
        Display_label = new QPushButton(Add_widget);
        Display_label->setObjectName(QString::fromUtf8("Display_label"));
        Display_label->setGeometry(QRect(270, 50, 41, 21));
        Display_label->setStyleSheet(QString::fromUtf8(""));
        Android_label = new QPushButton(Add_widget);
        Android_label->setObjectName(QString::fromUtf8("Android_label"));
        Android_label->setGeometry(QRect(275, 50, 31, 21));
        Android_label->setStyleSheet(QString::fromUtf8(""));
        flash_label = new QPushButton(Add_widget);
        flash_label->setObjectName(QString::fromUtf8("flash_label"));
        flash_label->setGeometry(QRect(345, 50, 41, 21));
        flash_label->setStyleSheet(QString::fromUtf8(""));
        IOS_label = new QPushButton(Add_widget);
        IOS_label->setObjectName(QString::fromUtf8("IOS_label"));
        IOS_label->setGeometry(QRect(415, 50, 41, 21));
        IOS_label->setStyleSheet(QString::fromUtf8(""));
        Windows_label = new QPushButton(Add_widget);
        Windows_label->setObjectName(QString::fromUtf8("Windows_label"));
        Windows_label->setGeometry(QRect(420, 50, 31, 21));
        Windows_label->setStyleSheet(QString::fromUtf8(""));
        picture_label = new QPushButton(Add_widget);
        picture_label->setObjectName(QString::fromUtf8("picture_label"));
        picture_label->setGeometry(QRect(485, 50, 31, 21));
        picture_label->setStyleSheet(QString::fromUtf8(""));
        Camera_label = new QPushButton(Add_widget);
        Camera_label->setObjectName(QString::fromUtf8("Camera_label"));
        Camera_label->setGeometry(QRect(545, 50, 51, 21));
        Camera_label->setStyleSheet(QString::fromUtf8(""));
        captions_label = new QPushButton(Add_widget);
        captions_label->setObjectName(QString::fromUtf8("captions_label"));
        captions_label->setGeometry(QRect(631, 50, 51, 21));
        captions_label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(Preview_widget);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 2));
        label_4->setMaximumSize(QSize(720, 2));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/ICON/Resources/shadow1.png);"));

        verticalLayout_4->addWidget(label_4);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(720, 82));
        widget_4->setMaximumSize(QSize(720, 82));
        widget_4->setStyleSheet(QString::fromUtf8("	background-color: rgb(39, 40, 45);"));
        Mobile_Game_pushButton = new QPushButton(widget_4);
        Mobile_Game_pushButton->setObjectName(QString::fromUtf8("Mobile_Game_pushButton"));
        Mobile_Game_pushButton->setGeometry(QRect(80, -1, 80, 91));
        Mobile_Game_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Mobile_Game_pushButton\n"
"{\n"
"	color: rgb(159, 159, 159);\n"
"	font: 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:1px groove gray;\n"
"}\n"
"\n"
"QPushButton#Mobile_Game_pushButton:hover\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"	background-color: rgb(50, 50, 50);\n"
"}\n"
"\n"
"QPushButton#Mobile_Game_pushButton:checked\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"	background-color: rgb(10, 10, 10);\n"
"}"));
        PC_Live_pushButton = new QPushButton(widget_4);
        PC_Live_pushButton->setObjectName(QString::fromUtf8("PC_Live_pushButton"));
        PC_Live_pushButton->setGeometry(QRect(0, 0, 80, 91));
        PC_Live_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#PC_Live_pushButton\n"
"{\n"
"	color: rgb(159, 159, 159);\n"
"	font: 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:0px groove gray;\n"
"}\n"
"\n"
"QPushButton#PC_Live_pushButton:hover\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"	background-color: rgb(50, 50, 50);\n"
"}\n"
"\n"
"QPushButton#PC_Live_pushButton:checked\n"
"{\n"
"	\n"
"background-color: rgb(10, 10, 10);\n"
"}"));
        Live_Begin_pushButton = new QPushButton(widget_4);
        Live_Begin_pushButton->setObjectName(QString::fromUtf8("Live_Begin_pushButton"));
        Live_Begin_pushButton->setGeometry(QRect(285, 20, 160, 44));
        Live_Begin_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Live_Begin_pushButton\n"
"{\n"
"	font: 75 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/Search/Resources/LIVE.png);\n"
"}\n"
"\n"
"QPushButton#Live_Begin_pushButton:hover\n"
"{\n"
"	border-image: url(:/Search/Resources/LIVE_H.png);\n"
"}\n"
"\n"
"QPushButton#Live_Begin_pushButton:checked\n"
"{\n"
"	border-image: url(:/Search/Resources/LIVE_C.png);\n"
"}\n"
""));
        Other_pushButton = new QPushButton(widget_4);
        Other_pushButton->setObjectName(QString::fromUtf8("Other_pushButton"));
        Other_pushButton->setGeometry(QRect(159, -1, 80, 91));
        Other_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Other_pushButton\n"
"{\n"
"	color: rgb(159, 159, 159);\n"
"	font: 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border:1px groove gray;\n"
"}\n"
"\n"
"QPushButton#Other_pushButton:hover\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"	background-color: rgb(50, 50, 50);\n"
"}\n"
"\n"
"QPushButton#Other_pushButton:checked\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"	background-color: rgb(10, 10, 10);\n"
"}"));
        Live_Quit_pushButton = new QPushButton(widget_4);
        Live_Quit_pushButton->setObjectName(QString::fromUtf8("Live_Quit_pushButton"));
        Live_Quit_pushButton->setGeometry(QRect(285, 20, 160, 44));
        Live_Quit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Live_Quit_pushButton\n"
"{\n"
"	font: 75 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/Search/Resources/LIVE.png);\n"
"}\n"
"\n"
"QPushButton#Live_Quit_pushButton:hover\n"
"{\n"
"	\n"
"	border-image: url(:/Search/Resources/LIVE_H.png);\n"
"}\n"
"\n"
"QPushButton#Live_Quit_pushButton:checked\n"
"{\n"
"	\n"
"	border-image: url(:/Search/Resources/LIVE_C.png);\n"
"}\n"
""));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 30, 75, 23));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(225, 0, 331, 82));
        widget_5->raise();
        Mobile_Game_pushButton->raise();
        PC_Live_pushButton->raise();
        Live_Begin_pushButton->raise();
        Other_pushButton->raise();
        Live_Quit_pushButton->raise();
        pushButton->raise();

        verticalLayout_4->addWidget(widget_4);

        widget_4->raise();
        label_3->raise();
        label_4->raise();
        Preview_widget->raise();
        TitleBarWidget->raise();
        MIC_pushButton = new QPushButton(widget_3);
        MIC_pushButton->setObjectName(QString::fromUtf8("MIC_pushButton"));
        MIC_pushButton->setGeometry(QRect(620, 500, 36, 36));
        MIC_pushButton->setMinimumSize(QSize(36, 36));
        MIC_pushButton->setMaximumSize(QSize(40, 40));
        MIC_pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#MIC_pushButton\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/MIC.png);\n"
"}\n"
"\n"
"QPushButton#MIC_pushButton:disabled{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/MIC_D.png);\n"
"}\n"
"\n"
"QPushButton#MIC_pushButton:hover\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/MIC_H.png);\n"
"}\n"
"\n"
"QPushButton#MIC_pushButton:checked\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/MIC_C.png);\n"
"}\n"
"\n"
""));
        Speaker_widget = new QWidget(widget_3);
        Speaker_widget->setObjectName(QString::fromUtf8("Speaker_widget"));
        Speaker_widget->setGeometry(QRect(565, 330, 36, 191));
        Speaker_widget->setStyleSheet(QString::fromUtf8("QWidget#Speaker_widget\n"
"{\n"
"	border-image: url(:/Search/Resources/AudioBackground.png);\n"
"}"));
        Checke_Speaker_pushButton = new QPushButton(Speaker_widget);
        Checke_Speaker_pushButton->setObjectName(QString::fromUtf8("Checke_Speaker_pushButton"));
        Checke_Speaker_pushButton->setGeometry(QRect(12, 150, 13, 13));
        Checke_Speaker_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Checke_Speaker_pushButton\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis.png);\n"
"}\n"
"\n"
"QPushButton#Checke_Speaker_pushButton:hover\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_D.png);\n"
"}\n"
"\n"
"QPushButton#Checke_Speaker_pushButton:checked\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_H.png);\n"
"}\n"
"\n"
"QPushButton#Checke_Speaker_pushButton:checked:hover\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_H.png);\n"
"}\n"
"\n"
""));
        Checke_Speaker_pushButton->setCheckable(true);
        Speaker_verticalSlider = new QSlider(Speaker_widget);
        Speaker_verticalSlider->setObjectName(QString::fromUtf8("Speaker_verticalSlider"));
        Speaker_verticalSlider->setGeometry(QRect(8, 10, 20, 131));
        Speaker_verticalSlider->setStyleSheet(QString::fromUtf8("QSlider  \n"
"{  \n"
"   \n"
"	\n"
"	background-color: rgb(48, 50, 56);\n"
"    border-style: outset;   \n"
"}  \n"
"  \n"
"QSlider::groove:vertical  \n"
"{  \n"
"    width: 2px;  \n"
"	border-image: url(:/Audio/Resources/Audio/VolumeProgress.png);\n"
"    margin: 2px 0  \n"
"}  \n"
"\n"
" QSlider::sub-page:vertical \n"
"{\n"
"    border-image: url(:/Audio/Resources/Audio/VolumeTrack.png);\n"
"}\n"
"\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
" }\n"
"\n"
" QSlider::handle:vertical:hover {\n"
"     height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_H.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
" }\n"
"\n"
"QSlider::handle:vertical:checked\n"
"{\n"
"	 height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-"
                        "image: url(:/Audio/Resources/Audio/volume_sphere_C.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
"}\n"
"\n"
"QSlider::handle:vertical:disabled\n"
"{\n"
"	 height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_D.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        Speaker_verticalSlider->setMinimum(1);
        Speaker_verticalSlider->setMaximum(100);
        Speaker_verticalSlider->setOrientation(Qt::Vertical);
        Setting_pushButton = new QPushButton(widget_3);
        Setting_pushButton->setObjectName(QString::fromUtf8("Setting_pushButton"));
        Setting_pushButton->setGeometry(QRect(673, 500, 36, 36));
        Setting_pushButton->setMinimumSize(QSize(36, 36));
        Setting_pushButton->setMaximumSize(QSize(36, 36));
        Setting_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Setting_pushButton{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Seeting.png);\n"
"}\n"
"QPushButton#Setting_pushButton:hover{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Seeting_H.png);\n"
"}\n"
"QPushButton#Setting_pushButton:disabled{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Seeting_D.png);\n"
"}\n"
"QPushButton#Setting_pushButton:checked{\n"
"	\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/Seeting_C.png);\n"
"}\n"
""));
        Search_pushButton = new QPushButton(widget_3);
        Search_pushButton->setObjectName(QString::fromUtf8("Search_pushButton"));
        Search_pushButton->setGeometry(QRect(700, 230, 16, 62));
        Search_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Search_pushButton{\n"
"	border-top-left-radius:10;\n"
"	border-bottom-left-radius:10;  \n"
"	background-color: rgb(255, 164, 24);\n"
"}\n"
"QPushButton#Search_pushButton:hover{\n"
"	background-color: rgb(255, 184, 44);\n"
"}\n"
"QPushButton#Search_pushButton:checked{\n"
"	\n"
"	background-color: rgb(255, 164, 24);\n"
"}\n"
"QPushButton#Search_pushButton:checked:hover{\n"
"	background-color: rgb(255, 184, 44);\n"
"}\n"
""));
        Search_pushButton->setCheckable(true);
        MIC_widget = new QWidget(widget_3);
        MIC_widget->setObjectName(QString::fromUtf8("MIC_widget"));
        MIC_widget->setGeometry(QRect(620, 330, 36, 191));
        MIC_widget->setStyleSheet(QString::fromUtf8("QWidget#MIC_widget\n"
"{\n"
"	border-image: url(:/Search/Resources/AudioBackground.png);\n"
"}"));
        Checke_MIC_pushButton = new QPushButton(MIC_widget);
        Checke_MIC_pushButton->setObjectName(QString::fromUtf8("Checke_MIC_pushButton"));
        Checke_MIC_pushButton->setGeometry(QRect(12, 150, 13, 13));
        Checke_MIC_pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton#Checke_MIC_pushButton\n"
"{\n"
"	\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis.png);\n"
"}\n"
"\n"
"QPushButton#Checke_MIC_pushButton:hover\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_D.png);\n"
"}\n"
"\n"
"QPushButton#Checke_MIC_pushButton:checked\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_H.png);\n"
"}\n"
"\n"
"QPushButton#Checke_MIC_pushButton:checked:hover\n"
"{\n"
"	border-image: url(:/Audio/Resources/Audio/SpeakerDis_H.png);\n"
"}\n"
"\n"
""));
        Checke_MIC_pushButton->setCheckable(true);
        MIC_verticalSlider = new QSlider(MIC_widget);
        MIC_verticalSlider->setObjectName(QString::fromUtf8("MIC_verticalSlider"));
        MIC_verticalSlider->setGeometry(QRect(8, 10, 20, 131));
        MIC_verticalSlider->setStyleSheet(QString::fromUtf8("QSlider  \n"
"{  \n"
"   \n"
"	\n"
"	background-color: rgb(48, 50, 56);\n"
"    border-style: outset;   \n"
"}  \n"
"  \n"
"QSlider::groove:vertical  \n"
"{  \n"
"    width: 2px;  \n"
"	border-image: url(:/Audio/Resources/Audio/VolumeProgress.png);\n"
"    margin: 2px 0  \n"
"}  \n"
"\n"
" QSlider::sub-page:vertical \n"
"{\n"
"    border-image: url(:/Audio/Resources/Audio/VolumeTrack.png);\n"
"}\n"
"\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
" }\n"
"\n"
" QSlider::handle:vertical:hover {\n"
"     height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_H.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
" }\n"
"\n"
"QSlider::handle:vertical:checked\n"
"{\n"
"	 height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-"
                        "image: url(:/Audio/Resources/Audio/volume_sphere_C.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
"}\n"
"\n"
"QSlider::handle:vertical:disabled\n"
"{\n"
"	 height: 10px;\n"
"	 width:5px;\n"
"     margin: px 5px px 5px;  \n"
"	 border-image: url(:/Audio/Resources/Audio/volume_sphere_D.png);\n"
"     margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        MIC_verticalSlider->setMinimum(1);
        MIC_verticalSlider->setMaximum(100);
        MIC_verticalSlider->setOrientation(Qt::Vertical);
        Component_widget = new QWidget(widget_3);
        Component_widget->setObjectName(QString::fromUtf8("Component_widget"));
        Component_widget->setGeometry(QRect(720, 0, 331, 561));
        verticalLayout_2 = new QVBoxLayout(Component_widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(Component_widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(320, 62));
        widget->setMaximumSize(QSize(16777215, 16777215));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(1, 0));
        line_3->setMaximumSize(QSize(1, 16777215));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        List_label = new QLabel(widget);
        List_label->setObjectName(QString::fromUtf8("List_label"));
        List_label->setMinimumSize(QSize(0, 62));
        List_label->setMaximumSize(QSize(16777215, 62));
        List_label->setStyleSheet(QString::fromUtf8("	background-color: rgb(39, 40, 45);"));
        List_label->setLineWidth(1);

        verticalLayout->addWidget(List_label);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 2));
        label->setMaximumSize(QSize(16777215, 2));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 0);"));

        verticalLayout->addWidget(label);

        listWidget = new QDragListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(320, 493));
        listWidget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QListWidget\n"
"{\n"
"outline:0px;\n"
"background-color: rgb(39, 40, 45);\n"
"border:px;\n"
"}\n"
"\n"
" QListView::item:hover\n"
"{\n"
"	background-color: rgb(40, 41, 46);\n"
"}\n"
"\n"
"\n"
" QListView::item:selected \n"
"{\n"
"background-color: rgb(35, 36, 40);\n"
"}\n"
" QListView::item\n"
"{\n"
"	background-color: rgb(39, 40, 45);\n"
"}"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_2 = new QFrame(Component_widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(1, 0));
        line_2->setMaximumSize(QSize(1, 16777215));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);


        verticalLayout_2->addLayout(horizontalLayout);

        widget_2->raise();
        Setting_pushButton->raise();
        Search_pushButton->raise();
        Speaker_widget->raise();
        MIC_widget->raise();
        MIC_pushButton->raise();
        Speaker_pushButton->raise();
        Component_widget->raise();

        retranslateUi(RdzbDemoClass);

        QMetaObject::connectSlotsByName(RdzbDemoClass);
    } // setupUi

    void retranslateUi(QDialog *RdzbDemoClass)
    {
        RdzbDemoClass->setWindowTitle(QApplication::translate("RdzbDemoClass", "\351\224\220\345\212\250PC\345\275\225\345\261\217SDK Demo", 0, QApplication::UnicodeUTF8));
        Speaker_pushButton->setText(QString());
        Rdzb_label->setText(QString());
        slogan_label->setText(QApplication::translate("RdzbDemoClass", "\347\233\264\346\222\255\351\246\226\351\200\211", 0, QApplication::UnicodeUTF8));
        Operate_pushButton->setText(QString());
        Min_pushButton->setText(QString());
        Close_pushButton->setText(QString());
        Rdzb_label_Normal1->setText(QApplication::translate("RdzbDemoClass", "\351\224\220\345\212\250PC\345\275\225\345\261\217SDK Demo", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        Game_pushButton_select->setText(QString());
        Display_pushButton_select->setText(QString());
        Android_pushButton_select->setText(QString());
        Windows_pushButton_select->setText(QString());
        IOS_pushButton_select->setText(QString());
        Camera_pushButton_select->setText(QString());
        RTMP_pushButton_select->setText(QString());
        Video_pushButton_select->setText(QString());
        flash_pushButton_select->setText(QString());
        picture_pushButton_select->setText(QString());
        captions_pushButton_select->setText(QString());
        Video_label->setText(QApplication::translate("RdzbDemoClass", "\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        Game_label->setText(QApplication::translate("RdzbDemoClass", "\346\270\270\346\210\217", 0, QApplication::UnicodeUTF8));
        RTMP_label->setText(QApplication::translate("RdzbDemoClass", "RTMP", 0, QApplication::UnicodeUTF8));
        Display_label->setText(QApplication::translate("RdzbDemoClass", "\346\230\276\347\244\272\345\231\250", 0, QApplication::UnicodeUTF8));
        Android_label->setText(QApplication::translate("RdzbDemoClass", "\345\256\211\345\215\223", 0, QApplication::UnicodeUTF8));
        flash_label->setText(QApplication::translate("RdzbDemoClass", "flash", 0, QApplication::UnicodeUTF8));
        IOS_label->setText(QApplication::translate("RdzbDemoClass", "IOS", 0, QApplication::UnicodeUTF8));
        Windows_label->setText(QApplication::translate("RdzbDemoClass", "\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        picture_label->setText(QApplication::translate("RdzbDemoClass", "\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        Camera_label->setText(QApplication::translate("RdzbDemoClass", "\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
        captions_label->setText(QApplication::translate("RdzbDemoClass", "\345\255\227\345\271\225", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        Mobile_Game_pushButton->setText(QApplication::translate("RdzbDemoClass", "\346\211\213\346\270\270\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        PC_Live_pushButton->setText(QApplication::translate("RdzbDemoClass", "PC\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        Live_Begin_pushButton->setText(QApplication::translate("RdzbDemoClass", "\345\274\200\345\247\213\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        Other_pushButton->setText(QApplication::translate("RdzbDemoClass", "\345\205\266\344\273\226", 0, QApplication::UnicodeUTF8));
        Live_Quit_pushButton->setText(QApplication::translate("RdzbDemoClass", "\345\201\234\346\255\242\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("RdzbDemoClass", "\350\257\255\350\250\200", 0, QApplication::UnicodeUTF8));
        MIC_pushButton->setText(QString());
        Checke_Speaker_pushButton->setText(QString());
        Setting_pushButton->setText(QString());
        Search_pushButton->setText(QApplication::translate("RdzbDemoClass", "<", 0, QApplication::UnicodeUTF8));
        Checke_MIC_pushButton->setText(QString());
        List_label->setText(QApplication::translate("RdzbDemoClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#ffa118;\">\347\252\227\345\217\243\345\210\227\350\241\250</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RdzbDemoClass: public Ui_RdzbDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RDZBDEMO_H
