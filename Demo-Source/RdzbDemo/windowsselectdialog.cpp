#include "stdafx.h"
#include "windowsselectdialog.h"
#include "rdzbdemo.h"
#include "myradiobutton.h"
WindowsSelectDialog::WindowsSelectDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
	m_pant = NULL;
	m_pant = (QDialog*)parent;

	((RdzbDemo*)parent)->GetWindowsList( ui.listWidget );
}

WindowsSelectDialog::~WindowsSelectDialog()
{

}

void WindowsSelectDialog::on_Close_pushButton_clicked()
{
	close();
}

void WindowsSelectDialog::on_Cancel_pushButton_clicked()
{
	close();
}

void WindowsSelectDialog::on_Refresh_pushButton_clicked()
{
	int counter =ui.listWidget->count();
	for(int index=0;index<counter;index++)
	{
		QListWidgetItem *item = ui.listWidget->takeItem(0);
		delete item;
	}
	((RdzbDemo*)m_pant)->GetWindowsList( ui.listWidget );
}

void WindowsSelectDialog::on_OK_pushButton_clicked()
{
	MyRadioButton * radioButton = NULL;
	for( int i = 0;  ui.listWidget->count() > i; i++ )
	{
		MyRadioButton * PradioButton = (( MyRadioButton* )  ui.listWidget->itemWidget( ui.listWidget->item(i) ) );
		if ( PradioButton->isChecked() )
		{
			radioButton = PradioButton;
			break;
		}
	}
	if ( radioButton != NULL )
	{
		IScreen_SCapParams	sCapParams	= {0};
		sCapParams.hWindow = radioButton->m_hWnd;
		HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Screen, Screen_AssembleSource( &sCapParams ) );
		if ( hChip )
		{
			Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
			//新添加的元件，不要忘了设置显示。
			Chip_SetVisible( hChip, TRUE );
			Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
		}
	}
	close();
}

bool WindowsSelectDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{

		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.label_2 || pWid == ui.label ||  pWid == ui.widget_2)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void WindowsSelectDialog::LangageChange()
{
	//窗口选取
	RdzbDemo::setControlText( ui.label_2,L"RdzbDemoWindowSelection", L"WindowSelection",ELabel);

	//请勾选
	RdzbDemo::setControlText( ui.label_3,L"RdzbDemoWindowSelection", L"DisplayPointOut1",ELabel);

	//确认
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoWindowSelection", L"Acknowledgement",EButton);

	//取消
	RdzbDemo::setControlText( ui.Cancel_pushButton,L"RdzbDemoWindowSelection", L"Cancel",EButton);
}

void WindowsSelectDialog::on_listWidget_currentRowChanged( int index )
{
	MyRadioButton * PradioButton = (( MyRadioButton* )  ui.listWidget->itemWidget( ui.listWidget->item(index) ) );
	PradioButton->OnChipSelected();
}
