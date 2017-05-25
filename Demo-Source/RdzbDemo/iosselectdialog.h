#ifndef IOSSELECTDIALOG_H
#define IOSSELECTDIALOG_H

#include <QDialog>
#include "ui_iosselectdialog.h"

class IOSSelectDialog : public QDialog
{
	Q_OBJECT

public:
	IOSSelectDialog(QWidget *parent = 0);
	~IOSSelectDialog();
	void LangageChange();//语言切换
private:
	Ui::IOSSelectDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//下载Airplay
	void on_IOS_pushButton_clicked();
	//添加Airplay
	void on_Download_pushButton_clicked();
};

#endif // IOSSELECTDIALOG_H
