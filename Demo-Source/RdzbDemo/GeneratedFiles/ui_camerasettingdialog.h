/********************************************************************************
** Form generated from reading UI file 'camerasettingdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGDIALOG_H
#define UI_CAMERASETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraSettingDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QWidget *widget_3;
    QPushButton *OK_pushButton;
    QPushButton *Cancel_pushButton;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *Refresh_pushButton;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSlider *horizontalSlider;
    QLabel *Whitening_label;
    QCheckBox *checkBox_3;
    QLabel *label_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *CameraSettingDialog)
    {
        if (CameraSettingDialog->objectName().isEmpty())
            CameraSettingDialog->setObjectName(QString::fromUtf8("CameraSettingDialog"));
        CameraSettingDialog->resize(456, 322);
        CameraSettingDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"border-image: url(:/SeedUI/Resources/SeedUI/PC_Camera.png);\n"
"}"));
        gridLayout = new QGridLayout(CameraSettingDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(CameraSettingDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	background-color: rgb(34, 36, 40);\n"
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
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(2, 2, 452, 40));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(38, 40, 45);\n"
"}"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 9, 15, 14));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Camera.png);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 8, 61, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(435, 8, 10, 10));
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
"}"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(2, 226, 452, 93));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"	background-color: rgb(38, 40, 45);\n"
"}"));
        OK_pushButton = new QPushButton(widget_3);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(140, 40, 60, 24));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow.png);\n"
"	font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        Cancel_pushButton = new QPushButton(widget_3);
        Cancel_pushButton->setObjectName(QString::fromUtf8("Cancel_pushButton"));
        Cancel_pushButton->setGeometry(QRect(230, 40, 60, 24));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Cancel_pushButton\n"
"{\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 60, 261, 22));
        comboBox->setMinimumSize(QSize(261, 0));
        comboBox->setMaximumSize(QSize(261, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("/**********\344\270\213\346\213\211\345\210\227\350\241\250**********/\n"
"QComboBox {\n"
"    background-color: black;\n"
"    border: 1px solid #333333;\n"
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
"	background-color: rgb(83, 83, 83);\n"
"}/* \344\270\213\346\213\211\346\214\211\351"
                        "\222\256 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
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
"	 selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: "
                        "1 #d7801a);\n"
"}/* \344\270\213\346\213\211\351\200\211\346\213\251 */\n"
"QComboBox QAbstractItemView::item{height:20px;}/*\344\270\213\346\213\211\351\200\211\346\213\251\351\253\230\345\272\246*/"));
        Refresh_pushButton = new QPushButton(widget);
        Refresh_pushButton->setObjectName(QString::fromUtf8("Refresh_pushButton"));
        Refresh_pushButton->setGeometry(QRect(355, 58, 83, 24));
        Refresh_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Refresh_pushButton\n"
"{\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(220, 220, 220);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton.png);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_C.png);\n"
"}\n"
""));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setEnabled(true);
        widget_4->setGeometry(QRect(10, 80, 411, 91));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalSlider = new QSlider(widget_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(0, 20));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider  \n"
"{  \n"
"    background-color: rgb(34, 36, 40);\n"
"    border-style: outset;   \n"
"    border-radius: 10px;   \n"
"}  \n"
"  \n"
"QSlider::groove:horizontal  \n"
"{  \n"
"    height: 2px;  \n"
"    background: rgb(10,10,10);  \n"
"    margin: 2px 0  \n"
"}  \n"
"\n"
"QSlider::handle:horizontal   \n"
"{  \n"
"    background: rgb(254,161,24);  \n"
"    width: 10px;  \n"
"    height:2px;  \n"
"    margin: -5px 0px -5px px;  \n"
"    border-radius:5px;   \n"
"    \n"
"    border:1px solid rgb(254,161,24);  \n"
"} "));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 1, 1, 2);

        Whitening_label = new QLabel(widget_4);
        Whitening_label->setObjectName(QString::fromUtf8("Whitening_label"));
        Whitening_label->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(Whitening_label, 0, 3, 1, 1);

        checkBox_3 = new QCheckBox(widget_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(checkBox_3, 0, 4, 1, 1);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        checkBox = new QCheckBox(widget_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(checkBox, 1, 1, 1, 1);

        checkBox_2 = new QCheckBox(widget_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setEnabled(true);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(checkBox_2, 1, 2, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CameraSettingDialog);

        QMetaObject::connectSlotsByName(CameraSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraSettingDialog)
    {
        CameraSettingDialog->setWindowTitle(QApplication::translate("CameraSettingDialog", "CameraSettingDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("CameraSettingDialog", "\346\221\204\345\203\217\345\244\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("CameraSettingDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        Cancel_pushButton->setText(QApplication::translate("CameraSettingDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CameraSettingDialog", "\346\221\204\345\203\217\345\244\264\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        Refresh_pushButton->setText(QApplication::translate("CameraSettingDialog", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CameraSettingDialog", "\347\224\273\351\235\242\347\276\216\347\231\275", 0, QApplication::UnicodeUTF8));
        Whitening_label->setText(QApplication::translate("CameraSettingDialog", "+50", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("CameraSettingDialog", "\345\274\200", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CameraSettingDialog", "\351\225\234\345\244\264\346\226\271\345\220\221", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("CameraSettingDialog", "\346\260\264\345\271\263\347\277\273\350\275\254", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("CameraSettingDialog", "\345\236\202\347\233\264\347\277\273\350\275\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraSettingDialog: public Ui_CameraSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGDIALOG_H
