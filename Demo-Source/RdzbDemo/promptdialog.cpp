#include "stdafx.h"
#include "promptdialog.h"
#include "rdzbdemo.h"
PromptDialog::PromptDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
	m_SchemaSelectSerialNumber = 0;
}

PromptDialog::~PromptDialog()
{

}

void PromptDialog::on_Close_pushButton_clicked()
{
	close();
}

void PromptDialog::on_OK_pushButton_clicked()
{
	if ( ui.Tray_radioButton->isChecked() )
		m_SchemaSelectSerialNumber = 1;
	else
		m_SchemaSelectSerialNumber = 2;

	close();
}

void PromptDialog::on_Cancel_pushButton_clicked()
{
	close();
}

bool PromptDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.label_2 || pWid == ui.label ||  pWid == ui.widget_2  )
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void PromptDialog::LangageChange()
{
	//提示
	RdzbDemo::setControlText( ui.label_2,L"RdzbDemoClosePrompt", L"Prompt",ELabel);

	//点击
	RdzbDemo::setControlText( ui.label_3,L"RdzbDemoClosePrompt", L"DisplayPointOut1",ELabel);

	//最小化
	RdzbDemo::setControlText( ui.Tray_radioButton,L"RdzbDemoClosePrompt", L"minimum",ECheckBox);

	//退出程序
	RdzbDemo::setControlText( ui.Quit_radioButton,L"RdzbDemoClosePrompt", L"quit",ECheckBox);

	//确认
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoClosePrompt", L"Acknowledgement",EButton);

	//取消
	RdzbDemo::setControlText( ui.Cancel_pushButton,L"RdzbDemoClosePrompt", L"Cancel",EButton);
}
