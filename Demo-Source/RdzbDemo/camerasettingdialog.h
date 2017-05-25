#ifndef CAMERASETTINGDIALOG_H
#define CAMERASETTINGDIALOG_H

#include <QDialog>
#include "ui_camerasettingdialog.h"

class CameraSettingDialog : public QDialog
{
	Q_OBJECT

public:
	CameraSettingDialog(QWidget *parent = 0);
	~CameraSettingDialog();

	void CreateComboBox();
	void LangageChange();//语言切换
private:
	Ui::CameraSettingDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
	private slots:
		//关闭
		void on_Close_pushButton_clicked();
		//取消
		void on_Cancel_pushButton_clicked();
		//刷新
		void on_Refresh_pushButton_clicked();
		//确定
		void on_OK_pushButton_clicked();
};

#endif // CAMERASETTINGDIALOG_H
