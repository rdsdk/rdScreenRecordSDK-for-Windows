#ifndef OPENDIALOG_H
#define OPENDIALOG_H

#include <QDialog>
#include "ui_opendialog.h"

class OpenDialog : public QDialog
{
	Q_OBJECT

public:
	OpenDialog(QWidget *parent = 0);
	~OpenDialog();
	void SetTitleText( QString Text );//设置标题名
	enum OpenFileFmt
	{
		OPFilefmtMove, //视频文件 格式：mp4,m4v,flv,f4v,3gpp
		OPFilefmtPicture, //图片文件 格式：jpg,png,bmp
		OPFilefmtFlash, //flsh文件 格式：
		OPFilefmtRtmp //rtmp格式
	};

	void SetModel( OpenDialog::OpenFileFmt  openFileFmt );//设置界面打开的类型
	void LangageChange();//语言切换
private:
	Ui::OpenDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
	OpenFileFmt m_OpenFileFmt;//需要打开的文件
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//浏览
	void on_Browse_pushButton_clicked();
	//确认
	void on_OK_pushButton_clicked();
};

#endif // OPENDIALOG_H
