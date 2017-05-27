/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QPushButton *Cancel_pushButton;
    QStackedWidget *stackedWidget;
    QWidget *Video_page;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QComboBox *FPS_comboBox;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QSpinBox *Bitrate_spinBox;
    QCheckBox *Win7_Aero_checkBox;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *Resolution_comboBox;
    QCheckBox *Win7_MOUSE_checkBox;
    QWidget *Auido_page;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_5;
    QLabel *label_9;
    QComboBox *Speaker_comboBox;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QComboBox *MIC_comboBox;
    QWidget *Live_page;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QComboBox *File_comboBox;
    QCheckBox *File_checkBox;
    QLabel *label_11;
    QLabel *label_14;
    QPushButton *View_pushButton;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *File_spinBox;
    QLabel *label_16;
    QLineEdit *File_lineEdit;
    QPushButton *browse_pushButton;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *Rtmp_checkBox;
    QLabel *label_12;
    QLineEdit *Rtmp_lineEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *TiletelineEdit;
    QWidget *language_page;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *Language_comboBox;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QPushButton *Video_pushButton;
    QPushButton *Auido_pushButton;
    QPushButton *Live_pushButton;
    QPushButton *Langage_pushButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QPushButton *OK_pushButton;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(505, 299);
        SettingDialog->setStyleSheet(QString::fromUtf8("QDialog#SettingDialog\n"
"{\n"
"	\n"
"	\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/PC_Camera.png);\n"
"}\n"
""));
        gridLayout = new QGridLayout(SettingDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(SettingDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	background-color: rgb(47, 47, 47);\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	color: rgb(85, 85, 85);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked \n"
"{\n"
"	image: url(:/SeedUI/Resources/SeedUI/NoCancel.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked \n"
"{\n"
"	image: url(:/SeedUI/Resources/SeedUI/Cancel.png);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"	image: url(:/SeedUI/Resources/SeedUI/NoCancel_H.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover\n"
"{\n"
"	image: url(:/SeedUI/Resources/SeedUI/Cancel_H.png);\n"
"}"));
        Cancel_pushButton = new QPushButton(widget_3);
        Cancel_pushButton->setObjectName(QString::fromUtf8("Cancel_pushButton"));
        Cancel_pushButton->setGeometry(QRect(270, 262, 60, 25));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 50, 413, 200));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(20, 20, 20);\n"
"}\n"
"/**********\344\270\213\346\213\211\345\210\227\350\241\250**********/\n"
"QComboBox {\n"
"    background-color: black;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"}\n"
"QComboBox:hover {\n"
"    background-color: rgb(24, 24, 24);\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	width: 25px;\n"
"}/* \344\270\213\346\213\211\346\214\211\351\222\256 */\n"
"QComboBox::drop-down:hover {\n"
"  	subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	backg"
                        "round-color: rgb(83, 83, 83);\n"
"}/* \344\270\213\346\213\211\346\214\211\351\222\256 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox::down-arrow {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(83, 83, 83);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 */\n"
"QComboBox::down-arrow:hover {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(170, 170, 170);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox QAbstractItemView{\n"
"	outline:0px;/*\345\216\273\346\216\211\350\231\232\347\272\277*/\n"
"	color: rgb(209, 209, 209);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(43, 43, 43);\n"
"	 selection-backgrou"
                        "nd-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}/* \344\270\213\346\213\211\351\200\211\346\213\251 */\n"
"QComboBox QAbstractItemView::item{height:20px;}/*\344\270\213\346\213\211\351\200\211\346\213\251\351\253\230\345\272\246*/\n"
"\n"
"/*\n"
"border-top-left-radius \350\256\276\347\275\256\345\267\246\344\270\212\350\247\222\345\234\206\350\247\222; \n"
"border-top-right-radius \350\256\276\347\275\256\345\217\263\344\270\212\350\247\222\345\234\206\350\247\222; \n"
"border-bottom-left-radius \350\256\276\347\275\256\345\267\246\344\270\213\350\247\222\345\234\206\350\247\222; \n"
"border-bottom-right-radius \350\256\276\347\275\256\345\217\263\344\270\213\350\247\222\345\234\206\350\247\222;\n"
"*/\n"
"\n"
"/*********\345\276\256\350\260\203\345\231\250********/\n"
"QSpinBox {\n"
"        border-top-left-radius:5px;\n"
"		border-bottom-left-radius:5px;\n"
"        height: 24px;\n"
"        min-width: 40px;\n"
"        border: 1px solid rgb(100, 100, 100);\n"
""
                        "        background: rgb(20, 20, 20);\n"
"}\n"
"QSpinBox:enabled {\n"
"        color: rgb(220, 220, 220);\n"
"}\n"
"QSpinBox:enabled:hover, QLineEdit:enabled:focus {\n"
"        color: rgb(230, 230, 230);\n"
"}\n"
"QSpinBox:!enabled {\n"
"        color: rgb(65, 65, 65);\n"
"        background: transparent;\n"
"}\n"
"QPushButton\n"
"{\n"
"	background-color: rgb(40,40,40);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(254, 161, 24);\n"
"	border-radius:10px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(50, 50, 50);\n"
"	color: rgb(254, 181, 54);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background-color: rgb(60, 60, 60);\n"
"}\n"
"\n"
""));
        Video_page = new QWidget();
        Video_page->setObjectName(QString::fromUtf8("Video_page"));
        layoutWidget = new QWidget(Video_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 391, 32));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(6);
        formLayout_2->setVerticalSpacing(0);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(50, 30));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 70 14px \"\351\273\221\344\275\223\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        FPS_comboBox = new QComboBox(layoutWidget);
        FPS_comboBox->setObjectName(QString::fromUtf8("FPS_comboBox"));
        FPS_comboBox->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, FPS_comboBox);

        layoutWidget_2 = new QWidget(Video_page);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 90, 141, 32));
        formLayout_3 = new QFormLayout(layoutWidget_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(50, 30));
        label_5->setMaximumSize(QSize(50, 16777215));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 70 14px \"\351\273\221\344\275\223\";"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        Bitrate_spinBox = new QSpinBox(layoutWidget_2);
        Bitrate_spinBox->setObjectName(QString::fromUtf8("Bitrate_spinBox"));
        Bitrate_spinBox->setMinimumSize(QSize(42, 30));
        Bitrate_spinBox->setMaximumSize(QSize(16777215, 30));
        Bitrate_spinBox->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, Bitrate_spinBox);

        Win7_Aero_checkBox = new QCheckBox(Video_page);
        Win7_Aero_checkBox->setObjectName(QString::fromUtf8("Win7_Aero_checkBox"));
        Win7_Aero_checkBox->setGeometry(QRect(67, 160, 331, 21));
        Win7_Aero_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(80, 80, 80);\n"
"}"));
        layoutWidget1 = new QWidget(Video_page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 391, 34));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(50, 30));
        label_3->setMaximumSize(QSize(50, 3));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 70 14px \"\351\273\221\344\275\223\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        Resolution_comboBox = new QComboBox(layoutWidget1);
        Resolution_comboBox->setObjectName(QString::fromUtf8("Resolution_comboBox"));
        Resolution_comboBox->setMinimumSize(QSize(0, 30));
        Resolution_comboBox->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, Resolution_comboBox);

        Win7_MOUSE_checkBox = new QCheckBox(Video_page);
        Win7_MOUSE_checkBox->setObjectName(QString::fromUtf8("Win7_MOUSE_checkBox"));
        Win7_MOUSE_checkBox->setGeometry(QRect(67, 130, 331, 21));
        Win7_MOUSE_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(80, 80, 80);\n"
"}"));
        stackedWidget->addWidget(Video_page);
        Auido_page = new QWidget();
        Auido_page->setObjectName(QString::fromUtf8("Auido_page"));
        layoutWidget_3 = new QWidget(Auido_page);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 60, 381, 28));
        formLayout_5 = new QFormLayout(layoutWidget_3);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(80, 16777215));
        label_9->setStyleSheet(QString::fromUtf8("font: 70 15px \"\351\273\221\344\275\223\";\n"
"color: rgb(91, 91, 91);"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_9);

        Speaker_comboBox = new QComboBox(layoutWidget_3);
        Speaker_comboBox->setObjectName(QString::fromUtf8("Speaker_comboBox"));
        Speaker_comboBox->setMinimumSize(QSize(293, 0));
        Speaker_comboBox->setMaximumSize(QSize(293, 16777215));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, Speaker_comboBox);

        layoutWidget2 = new QWidget(Auido_page);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 381, 28));
        formLayout_4 = new QFormLayout(layoutWidget2);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));
        label_8->setStyleSheet(QString::fromUtf8("font: 70 15px \"\351\273\221\344\275\223\";\n"
"color: rgb(91, 91, 91);"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        MIC_comboBox = new QComboBox(layoutWidget2);
        MIC_comboBox->setObjectName(QString::fromUtf8("MIC_comboBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, MIC_comboBox);

        stackedWidget->addWidget(Auido_page);
        Live_page = new QWidget();
        Live_page->setObjectName(QString::fromUtf8("Live_page"));
        widget_4 = new QWidget(Live_page);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 90, 391, 101));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget#widget_4\n"
"{\n"
" border: 1px solid #333333;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(5, -1, 5, -1);
        File_comboBox = new QComboBox(widget_4);
        File_comboBox->setObjectName(QString::fromUtf8("File_comboBox"));
        File_comboBox->setEnabled(true);
        File_comboBox->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(File_comboBox, 1, 3, 1, 1);

        File_checkBox = new QCheckBox(widget_4);
        File_checkBox->setObjectName(QString::fromUtf8("File_checkBox"));

        gridLayout_2->addWidget(File_checkBox, 0, 0, 1, 1);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 25));
        label_11->setMaximumSize(QSize(16777215, 25));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        gridLayout_2->addWidget(label_11, 0, 1, 1, 1);

        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 25));
        label_14->setMaximumSize(QSize(16777215, 25));
        label_14->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        gridLayout_2->addWidget(label_14, 1, 1, 1, 1);

        View_pushButton = new QPushButton(widget_4);
        View_pushButton->setObjectName(QString::fromUtf8("View_pushButton"));
        View_pushButton->setMinimumSize(QSize(60, 24));
        View_pushButton->setMaximumSize(QSize(60, 24));
        View_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));

        gridLayout_2->addWidget(View_pushButton, 0, 5, 1, 1);

        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 25));
        label_15->setMaximumSize(QSize(16777215, 25));
        label_15->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        gridLayout_2->addWidget(label_15, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        File_spinBox = new QSpinBox(widget_4);
        File_spinBox->setObjectName(QString::fromUtf8("File_spinBox"));
        File_spinBox->setMinimumSize(QSize(42, 25));
        File_spinBox->setMaximumSize(QSize(80, 25));
        File_spinBox->setMaximum(8192);
        File_spinBox->setSingleStep(256);

        horizontalLayout_5->addWidget(File_spinBox);

        label_16 = new QLabel(widget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        horizontalLayout_5->addWidget(label_16);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 3, 1, 1);

        File_lineEdit = new QLineEdit(widget_4);
        File_lineEdit->setObjectName(QString::fromUtf8("File_lineEdit"));
        File_lineEdit->setEnabled(true);
        File_lineEdit->setMinimumSize(QSize(0, 25));
        File_lineEdit->setMaximumSize(QSize(16777215, 25));
        File_lineEdit->setBaseSize(QSize(0, 0));
        File_lineEdit->setStyleSheet(QString::fromUtf8("border-width:  1px 40px 40px 40px ;\n"
"border-radius : 4px;\n"
"border-width: 1px;\n"
"border-style: none;\n"
"border:1px groove  rgb(50, 53, 59);border-radius:4px;\n"
"\n"
"font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(166, 166, 166);"));

        gridLayout_2->addWidget(File_lineEdit, 0, 3, 1, 1);

        browse_pushButton = new QPushButton(widget_4);
        browse_pushButton->setObjectName(QString::fromUtf8("browse_pushButton"));
        browse_pushButton->setEnabled(true);
        browse_pushButton->setMinimumSize(QSize(60, 24));
        browse_pushButton->setMaximumSize(QSize(60, 24));
        browse_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));

        gridLayout_2->addWidget(browse_pushButton, 0, 4, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        widget_5 = new QWidget(Live_page);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(10, 50, 391, 35));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget#widget_5\n"
"{\n"
" border: 1px solid #333333;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, -1, 5, -1);
        Rtmp_checkBox = new QCheckBox(widget_5);
        Rtmp_checkBox->setObjectName(QString::fromUtf8("Rtmp_checkBox"));

        horizontalLayout_2->addWidget(Rtmp_checkBox);

        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 25));
        label_12->setMaximumSize(QSize(16777215, 25));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        horizontalLayout_2->addWidget(label_12);

        Rtmp_lineEdit = new QLineEdit(widget_5);
        Rtmp_lineEdit->setObjectName(QString::fromUtf8("Rtmp_lineEdit"));
        Rtmp_lineEdit->setMinimumSize(QSize(0, 25));
        Rtmp_lineEdit->setMaximumSize(QSize(16777215, 25));
        Rtmp_lineEdit->setBaseSize(QSize(0, 0));
        Rtmp_lineEdit->setStyleSheet(QString::fromUtf8("border-width:  1px 40px 40px 40px ;\n"
"border-radius : 4px;\n"
"border-width: 1px;\n"
"border-style: none;\n"
"border:1px groove  rgb(50, 53, 59);\n"
"\n"
"font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(166, 166, 166);"));

        horizontalLayout_2->addWidget(Rtmp_lineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        layoutWidget3 = new QWidget(Live_page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 391, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 0, 0);
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));

        horizontalLayout_3->addWidget(label_13);

        TiletelineEdit = new QLineEdit(layoutWidget3);
        TiletelineEdit->setObjectName(QString::fromUtf8("TiletelineEdit"));
        TiletelineEdit->setMinimumSize(QSize(0, 25));
        TiletelineEdit->setMaximumSize(QSize(16777215, 25));
        TiletelineEdit->setBaseSize(QSize(0, 0));
        TiletelineEdit->setStyleSheet(QString::fromUtf8("border-width:  1px 40px 40px 40px ;\n"
"border-radius : 4px;\n"
"border-width: 1px;\n"
"border-style: none;\n"
"border:1px groove  rgb(50, 53, 59);border-radius:4px;\n"
"font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(166, 166, 166);"));

        horizontalLayout_3->addWidget(TiletelineEdit);

        stackedWidget->addWidget(Live_page);
        layoutWidget->raise();
        widget_4->raise();
        widget_5->raise();
        language_page = new QWidget();
        language_page->setObjectName(QString::fromUtf8("language_page"));
        layoutWidget4 = new QWidget(language_page);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 20, 381, 28));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(40, 0));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 16px \"\351\273\221\344\275\223\";\n"
"color: rgb(254, 161, 24);"));

        horizontalLayout_6->addWidget(label_6);

        Language_comboBox = new QComboBox(layoutWidget4);
        Language_comboBox->setObjectName(QString::fromUtf8("Language_comboBox"));
        Language_comboBox->setMinimumSize(QSize(280, 0));
        Language_comboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(Language_comboBox);

        stackedWidget->addWidget(language_page);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 49, 90, 201));
        widget_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(47, 47, 47);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(254, 161, 24);\n"
"	border:px groove gray;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background-color: rgb(20, 20, 20);\n"
"}\n"
"\n"
"QWidget#widget_2\n"
"{\n"
"	\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 1, 0, 0);
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 1));
        label_10->setMaximumSize(QSize(16777215, 1));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));

        verticalLayout->addWidget(label_10);

        Video_pushButton = new QPushButton(widget_2);
        Video_pushButton->setObjectName(QString::fromUtf8("Video_pushButton"));
        Video_pushButton->setMinimumSize(QSize(89, 25));
        Video_pushButton->setMaximumSize(QSize(89, 25));
        Video_pushButton->setStyleSheet(QString::fromUtf8(""));
        Video_pushButton->setCheckable(true);
        Video_pushButton->setChecked(true);
        Video_pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(Video_pushButton);

        Auido_pushButton = new QPushButton(widget_2);
        Auido_pushButton->setObjectName(QString::fromUtf8("Auido_pushButton"));
        Auido_pushButton->setMinimumSize(QSize(89, 25));
        Auido_pushButton->setMaximumSize(QSize(89, 25));
        Auido_pushButton->setCheckable(true);
        Auido_pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(Auido_pushButton);

        Live_pushButton = new QPushButton(widget_2);
        Live_pushButton->setObjectName(QString::fromUtf8("Live_pushButton"));
        Live_pushButton->setMinimumSize(QSize(89, 25));
        Live_pushButton->setMaximumSize(QSize(89, 25));
        Live_pushButton->setCheckable(true);
        Live_pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(Live_pushButton);

        Langage_pushButton = new QPushButton(widget_2);
        Langage_pushButton->setObjectName(QString::fromUtf8("Langage_pushButton"));
        Langage_pushButton->setMinimumSize(QSize(89, 25));
        Langage_pushButton->setMaximumSize(QSize(89, 25));
        Langage_pushButton->setCheckable(true);
        Langage_pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(Langage_pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 1));
        label_7->setMaximumSize(QSize(16777215, 1));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));

        verticalLayout->addWidget(label_7);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 5, 500, 45));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 10, 15, 14));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/UI/Resources/butSetting_checked.png);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 5, 71, 25));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 75 16px \"\351\273\221\344\275\223\";"));
        Close_pushButton = new QPushButton(widget);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(480, 4, 10, 10));
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
        OK_pushButton = new QPushButton(widget_3);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(170, 262, 60, 25));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow.png);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_H.png);\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_C.png);\n"
"}\n"
""));

        gridLayout->addWidget(widget_3, 0, 0, 1, 1);


        retranslateUi(SettingDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "SettingDialog", 0, QApplication::UnicodeUTF8));
        Cancel_pushButton->setText(QApplication::translate("SettingDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingDialog", "\345\270\247\347\216\207", 0, QApplication::UnicodeUTF8));
        FPS_comboBox->clear();
        FPS_comboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "10", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("SettingDialog", "\347\240\201\347\216\207", 0, QApplication::UnicodeUTF8));
        Win7_Aero_checkBox->setText(QApplication::translate("SettingDialog", "\345\205\263\351\227\255Win7 Aero\346\225\210\346\236\234(\351\231\215\344\275\216\350\265\204\346\272\220\345\215\240\347\224\250\357\274\214\346\217\220\351\253\230\346\265\201\347\225\205\345\272\246)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingDialog", "\345\210\206\350\276\250\347\216\207", 0, QApplication::UnicodeUTF8));
        Resolution_comboBox->clear();
        Resolution_comboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "1920x1080", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "1280x720", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "1024x576", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "960x540", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "800x450", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "640x360", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "512x288", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "480x270", 0, QApplication::UnicodeUTF8)
        );
        Win7_MOUSE_checkBox->setText(QApplication::translate("SettingDialog", "\345\205\201\350\256\270\345\275\225\345\210\266\351\274\240\346\240\207\346\214\207\351\222\210", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SettingDialog", "\347\263\273\347\273\237\345\243\260\351\237\263", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SettingDialog", "\351\272\246\345\205\213\351\243\216\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        File_comboBox->clear();
        File_comboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "flv", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "mp4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingDialog", "avi", 0, QApplication::UnicodeUTF8)
        );
        File_checkBox->setText(QString());
        label_11->setText(QApplication::translate("SettingDialog", "\344\277\235\345\255\230\347\233\256\345\275\225", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("SettingDialog", "\346\226\207\344\273\266\346\240\274\345\274\217", 0, QApplication::UnicodeUTF8));
        View_pushButton->setText(QApplication::translate("SettingDialog", "\346\237\245\347\234\213", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("SettingDialog", "\346\226\207\344\273\266\345\210\206\345\215\267", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("SettingDialog", "MB", 0, QApplication::UnicodeUTF8));
        File_lineEdit->setText(QString());
        browse_pushButton->setText(QApplication::translate("SettingDialog", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        Rtmp_checkBox->setText(QString());
        label_12->setText(QApplication::translate("SettingDialog", "Rtmp\346\265\201", 0, QApplication::UnicodeUTF8));
        Rtmp_lineEdit->setText(QString());
        label_13->setText(QApplication::translate("SettingDialog", "\346\240\207\351\242\230", 0, QApplication::UnicodeUTF8));
        TiletelineEdit->setText(QString());
        label_6->setText(QApplication::translate("SettingDialog", "\350\257\255\350\250\200", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        Video_pushButton->setText(QApplication::translate("SettingDialog", "\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        Auido_pushButton->setText(QApplication::translate("SettingDialog", "\345\243\260\351\237\263", 0, QApplication::UnicodeUTF8));
        Live_pushButton->setText(QApplication::translate("SettingDialog", "\347\233\264\346\222\255\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Langage_pushButton->setText(QApplication::translate("SettingDialog", "\350\257\255\350\250\200", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("SettingDialog", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("SettingDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
