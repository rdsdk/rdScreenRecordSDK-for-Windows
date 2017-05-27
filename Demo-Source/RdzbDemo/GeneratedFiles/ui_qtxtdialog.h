/********************************************************************************
** Form generated from reading UI file 'qtxtdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTXTDIALOG_H
#define UI_QTXTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTxtDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *butTexItalic;
    QPushButton *butTexBold;
    QPushButton *butTexSizeByWidth;
    QPushButton *butTexColor;
    QDoubleSpinBox *dspScrollCharPerSecond;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *texInput;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *QTxtDialog)
    {
        if (QTxtDialog->objectName().isEmpty())
            QTxtDialog->setObjectName(QString::fromUtf8("QTxtDialog"));
        QTxtDialog->resize(419, 300);
        QTxtDialog->setMinimumSize(QSize(419, 300));
        QTxtDialog->setMaximumSize(QSize(419, 300));
        QTxtDialog->setStyleSheet(QString::fromUtf8("QDialog#QTxtDialog\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/PC_Camera.png);\n"
"}"));
        gridLayout = new QGridLayout(QTxtDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        widget = new QWidget(QTxtDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(34, 36, 40);\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 1, 5);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 30));
        widget_2->setMaximumSize(QSize(16777215, 30));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	background-color: rgb(43, 43, 43);\n"
"}\n"
""));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 8, 54, 12));
        label->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);\n"
"background-color: rgb(43, 43, 43);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 8, 15, 14));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_txt.png);\n"
"background-color: rgb(43, 43, 43);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setEnabled(true);
        Close_pushButton->setGeometry(QRect(395, 10, 10, 10));
        Close_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Close_pushButton{\n"
"	background-color: rgb(43, 43, 43);\n"
"	border-image: url(:/Close/Resources/Close_Normal.png);\n"
"}\n"
"QPushButton#Close_pushButton:hover{\n"
"	background-color: rgb(43, 43, 43);\n"
"	border-image: url(:/Close/Resources/Close_Hover.png);\n"
"}\n"
"QPushButton#Close_pushButton:disabled{\n"
"	background-color: rgb(43, 43, 43);\n"
"	border-image: url(:/Close/Resources/Close_Disabled.png);\n"
"}\n"
"QPushButton#Close_pushButton:checked{\n"
"	background-color: rgb(43, 43, 43);\n"
"	border-image: url(:/Close/Resources/Close_checked.png);\n"
"}\n"
""));

        verticalLayout->addWidget(widget_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 8, 12, 0);
        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setMinimumSize(QSize(0, 20));
        fontComboBox->setMaximumSize(QSize(16777215, 25));
        fontComboBox->setStyleSheet(QString::fromUtf8("QComboBox#fontComboBox {\n"
"    background-color: black;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"	color: rgb(254, 161, 24);\n"
"}\n"
"QComboBox#fontComboBox:hover {\n"
"    background-color: rgb(24, 24, 24);\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"	color: rgb(254, 161, 24);\n"
"}\n"
"QComboBox#fontComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	width: 25px;\n"
"}/* \344\270\213\346\213\211\346\214\211\351\222\256 */\n"
"QComboBox#fontComboBox::drop-down:hover {\n"
"  	subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	background-color: rgb(83, 83, "
                        "83);\n"
"}/* \344\270\213\346\213\211\346\214\211\351\222\256 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox#fontComboBox::down-arrow {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(83, 83, 83);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 */\n"
"QComboBox#fontComboBox::down-arrow:hover {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(170, 170, 170);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox#fontComboBox QAbstractItemView{\n"
"	outline:0px;/*\345\216\273\346\216\211\350\231\232\347\272\277*/\n"
"	color: rgb(209, 209, 209);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(43, 43, 43);\n"
"	 sele"
                        "ction-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}/* \344\270\213\346\213\211\351\200\211\346\213\251 */\n"
"QComboBox#fontComboBox QAbstractItemView::item{height:20px;}/*\344\270\213\346\213\211\351\200\211\346\213\251\351\253\230\345\272\246*/"));
        fontComboBox->setEditable(false);

        horizontalLayout->addWidget(fontComboBox);

        butTexItalic = new QPushButton(widget);
        butTexItalic->setObjectName(QString::fromUtf8("butTexItalic"));
        butTexItalic->setMinimumSize(QSize(16, 16));
        butTexItalic->setMaximumSize(QSize(16, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        butTexItalic->setFont(font);
        butTexItalic->setStyleSheet(QString::fromUtf8("QPushButton#butTexItalic\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Italic.png);\n"
"}\n"
"\n"
"QPushButton#butTexItalic:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Italic_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexItalic:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Italic_C.png);\n"
"}\n"
"\n"
"QPushButton#butTexItalic:checked:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Italic_C_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexItalic:disable\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Italic_D.png);\n"
"}\n"
""));
        butTexItalic->setCheckable(true);

        horizontalLayout->addWidget(butTexItalic);

        butTexBold = new QPushButton(widget);
        butTexBold->setObjectName(QString::fromUtf8("butTexBold"));
        butTexBold->setMaximumSize(QSize(16, 16));
        butTexBold->setFont(font);
        butTexBold->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#butTexBold\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Overstriking.png);\n"
"}\n"
"\n"
"QPushButton#butTexBold:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Overstiking_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexBold:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Overstriking_C.png);\n"
"}\n"
"\n"
"QPushButton#butTexBold:checked:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Overstriking_C_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexBold:disable\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/Overstriking_D.png);\n"
"}\n"
"\n"
""));
        butTexBold->setCheckable(true);

        horizontalLayout->addWidget(butTexBold);

        butTexSizeByWidth = new QPushButton(widget);
        butTexSizeByWidth->setObjectName(QString::fromUtf8("butTexSizeByWidth"));
        butTexSizeByWidth->setMaximumSize(QSize(16, 16));
        butTexSizeByWidth->setStyleSheet(QString::fromUtf8("QPushButton#butTexSizeByWidth\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/RollingMode.png);\n"
"}\n"
"\n"
"QPushButton#butTexSizeByWidth:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/RollingMode_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexSizeByWidth:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/RollingMode_C.png);\n"
"}\n"
"\n"
"QPushButton#butTexSizeByWidth:checked:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/RollingMode_C_H.png);\n"
"}\n"
"\n"
"QPushButton#butTexSizeByWidth:disable\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/RollingMode_D.png);\n"
"}\n"
""));
        butTexSizeByWidth->setCheckable(true);

        horizontalLayout->addWidget(butTexSizeByWidth);

        butTexColor = new QPushButton(widget);
        butTexColor->setObjectName(QString::fromUtf8("butTexColor"));
        butTexColor->setMinimumSize(QSize(16, 16));
        butTexColor->setMaximumSize(QSize(16, 16));
        butTexColor->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(butTexColor);

        dspScrollCharPerSecond = new QDoubleSpinBox(widget);
        dspScrollCharPerSecond->setObjectName(QString::fromUtf8("dspScrollCharPerSecond"));
        dspScrollCharPerSecond->setStyleSheet(QString::fromUtf8("QDoubleSpinBox#dspScrollCharPerSecond {\n"
"        border-radius:3px;\n"
"        height: 24px;\n"
"        min-width: 40px;\n"
"        border: 1px solid rgb(100, 100, 100);\n"
"        background: rgb(20, 20, 20);\n"
" 		color: rgb(254, 161, 24);\n"
"}\n"
"QDobleSpinBox#dspScrollCharPerSecond :enabled {\n"
"       color: rgb(254, 181, 24);\n"
"}\n"
"QDobleSpinBox#dspScrollCharPerSecond :enabled:hover, QLineEdit:enabled:focus {\n"
"       color: rgb(254, 181, 24);\n"
"}\n"
"QDobleSpinBox#dspScrollCharPerSecond :!enabled {\n"
"        color: rgb(255, 255, 255);\n"
"        background: transparent;\n"
"}"));
        dspScrollCharPerSecond->setDecimals(1);
        dspScrollCharPerSecond->setMaximum(9);
        dspScrollCharPerSecond->setSingleStep(0.2);

        horizontalLayout->addWidget(dspScrollCharPerSecond);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        texInput = new QTextEdit(widget);
        texInput->setObjectName(QString::fromUtf8("texInput"));
        texInput->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"  border-radius:5px;\n"
"  border: 1px solid rgb(100, 100, 100);\n"
"  background-color: rgb(33, 33, 33);\n"
"  color: rgb(254, 161, 24);\n"
"  font: 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        horizontalLayout_3->addWidget(texInput);

        horizontalSpacer_4 = new QSpacerItem(5, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 25));
        widget_3->setBaseSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(175, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow.png);\n"
"	font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_H.png);\n"
"}\n"
"\n"
"QPushButton#pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_C.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(QTxtDialog);

        QMetaObject::connectSlotsByName(QTxtDialog);
    } // setupUi

    void retranslateUi(QDialog *QTxtDialog)
    {
        QTxtDialog->setWindowTitle(QApplication::translate("QTxtDialog", "QTxtDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QTxtDialog", "\345\255\227\345\271\225\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Close_pushButton->setText(QString());
        butTexItalic->setText(QString());
        butTexBold->setText(QString());
        butTexSizeByWidth->setText(QString());
        butTexColor->setText(QString());
        texInput->setHtml(QApplication::translate("QTxtDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("QTxtDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QTxtDialog: public Ui_QTxtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTXTDIALOG_H
