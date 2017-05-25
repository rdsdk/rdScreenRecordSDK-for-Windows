#ifndef ANDROIDSELECTDIALOG_H
#define ANDROIDSELECTDIALOG_H

#include <QDialog>
#include "ui_androidselectdialog.h"

class AndroidSelectDialog : public QDialog
{
	Q_OBJECT

public:
	AndroidSelectDialog(QWidget *parent = 0);
	~AndroidSelectDialog();
	void LangageChange();//语言切换
private:
	Ui::AndroidSelectDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//下载模拟器
	void on_Download_pushButton_clicked();
	//添加安卓模拟器
	void on_DownWindow_pushButton_clicked();
};

#endif // ANDROIDSELECTDIALOG_H
