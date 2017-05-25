#include "stdafx.h"
#include "gameselectdialog.h"
#include "rdzbdemo.h"
#include "myradiobutton.h"
GameSelectDialog::GameSelectDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 

	m_pant = (QDialog *)parent;
	on_Refresh_pushButton_clicked();
}

GameSelectDialog::~GameSelectDialog()
{

}

void GameSelectDialog::on_Close_pushButton_clicked()
{
	close();
}

bool GameSelectDialog::winEvent( MSG* msg, long* result )
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

void GameSelectDialog::on_Refresh_pushButton_clicked()
{
	//窗口获取
	ui.comboBox->clear();
	ui.comboBox->addItem( NULL );
	((RdzbDemo*)m_pant)->GetWindowsList((void*)ui.comboBox,1);
	//游戏获取（由OpenGl绘制的显示的界面）
	//清除项目
	int counter =ui.listWidget->count();
	for(int index=0;index < counter;index++)
	{
		QListWidgetItem *item = ui.listWidget->takeItem(0);
		delete item;
	}
	//添加游戏
	int		iGameCount	= Game_GetCount();
	if ( iGameCount )
	{
		IGame_SGameInfo	gameInfo	= {0};
		for ( int i = 0; i < iGameCount; ++i )
		{
			Game_GetInfoByInd( i, &gameInfo );
			MyRadioButton * pRadioButton = new MyRadioButton( ui.listWidget );
			pRadioButton->setText(  QFU( gameInfo.szGameName ) );
			pRadioButton->m_dwProcessId = gameInfo.dwProcessId;
		}
	}
}	

void GameSelectDialog::on_Open_pushButton_clicked()
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
		HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), 
			ePinInput_Game,
			QString::number( radioButton->m_dwProcessId ).utf16() );
		if ( hChip )
		{
			Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
			Chip_SetVisible( hChip, TRUE );
			Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
		}
	}
	else
	{
		if ( !ui.comboBox->currentText () .isEmpty() )
		{
			IScreen_SCapParams	sCapParams	= {0};
			sCapParams.hWindow = (HWND)ui.comboBox->itemData(ui.comboBox->currentIndex()).toInt();
			HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Screen, Screen_AssembleSource( &sCapParams ) );
			if ( hChip )
			{
				Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
				//新添加的元件，不要忘了设置显示。
				Chip_SetVisible( hChip, TRUE );
				Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
			}
		}
	}
	close();
}

void GameSelectDialog::LangageChange()
{	
	//选择游戏
	RdzbDemo::setControlText( ui.label,L"RdzbDemoGame", L"SelectGame",ELabel);

	//双击
	RdzbDemo::setControlText( ui.label_3,L"RdzbDemoGame", L"DisplayPointOut1",ELabel);

	//如果
	RdzbDemo::setControlText( ui.label_4,L"RdzbDemoGame", L"DisplayPointOut2",ELabel);

	//刷新
	RdzbDemo::setControlText( ui.Refresh_pushButton,L"RdzbDemoGame", L"Renovation",EButton);
	
	//打开
	RdzbDemo::setControlText( ui.Open_pushButton,L"RdzbDemoGame", L"OpenUp",EButton);
}

void GameSelectDialog::on_listWidget_currentRowChanged( int index )
{
	MyRadioButton * PradioButton = (( MyRadioButton* )  ui.listWidget->itemWidget( ui.listWidget->item(index) ) );
	PradioButton->OnChipSelected();
}
