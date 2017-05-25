#ifndef QTXTDIALOG_H
#define QTXTDIALOG_H

#include <QDialog>
#include "ui_qtxtdialog.h"

class QTxtDialog : public QDialog
{
	Q_OBJECT

public:
	QTxtDialog(QWidget *parent = 0);
	~QTxtDialog();
	void Init( HCHIP HCip = 0 );
	void LangageChange();//语言切换


private:
	QColor			m_coTextColor;//字体颜色
	HCHIP m_hChip;//元件句柄
	Ui::QTxtDialog ui;
	bool winEvent( MSG* msg, long* result );
	bool m_isHM;//是否手动
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//添加字幕
	void on_pushButton_clicked();
	//字幕文字有变化
	void on_texInput_textChanged();
	//字体修改
	void on_fontComboBox_currentFontChanged ( const QFont & font );
	//字体倾斜
	void on_butTexItalic_clicked( bool checked );
	//字体加粗
	void on_butTexBold_clicked( bool checked );
	//字体加宽
	void on_butTexSizeByWidth_clicked( bool checked );
	//是否上下滚动
	void on_dspScrollCharPerSecond_valueChanged ( double d );
	//字体颜色
	void on_butTexColor_clicked();
};

#endif // QTXTDIALOG_H
