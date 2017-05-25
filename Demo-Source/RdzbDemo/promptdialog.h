#ifndef PROMPTDIALOG_H
#define PROMPTDIALOG_H

#include <QDialog>
#include "ui_promptdialog.h"

class PromptDialog : public QDialog
{
	Q_OBJECT

public:
	PromptDialog(QWidget *parent = 0);
	~PromptDialog();
	int m_SchemaSelectSerialNumber;//编号： 0为取消 1为启动托盘  2为退出程序 
	void LangageChange();//语言切换
private:
	Ui::PromptDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//确定
	void on_OK_pushButton_clicked();
	//取消
	void on_Cancel_pushButton_clicked();
};

#endif // PROMPTDIALOG_H
