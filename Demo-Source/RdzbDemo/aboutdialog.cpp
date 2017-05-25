#include "stdafx.h"
#include "aboutdialog.h"
#include "rdzbdemo.h"

AboutDialog::AboutDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);

	m_bSuccess = false;
	m_szErrStr = "0";
	//setAttribute(Qt::WA_TranslucentBackground,true); 
}

AboutDialog::~AboutDialog()
{

}

void AboutDialog::on_Close_pushButton_clicked()
{
	close();
}

bool AboutDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == ui.labAcceditLiveDays || pWid == ui.labAcceditLocalDays  || pWid == NULL || pWid == ui.widget || pWid == ui.Icon_label ||  pWid == ui.label_2  || pWid == ui.label_3 || pWid == ui.label)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void AboutDialog::on_OK_pushButton_clicked()
{
	close();
}

