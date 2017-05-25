#include "StdAfx.h"
#include "rdzbdemo.h"
#include "chipitem.h"
#include "CRangeSlider.h"
#include "qtxtdialog.h"
ChipItem::ChipItem( HCHIP hChip, QListWidget *parent, QWidget * parentDialog )
: QWidget(parent)
{
	ui.setupUi(this);
	m_parentDialog  = parentDialog;
	//connect( &m_timer,SIGNAL(	timeout()),this,SLOT(on_Timer()) );
	ZeroMemory( &m_sScrCapParams, sizeof( m_sScrCapParams ) );
	ZeroMemory( &m_sChipStatus, sizeof( m_sChipStatus ) );
	m_eClassType		= ePinInput_Unknow;
	m_listWidChips		= parent;
	m_hChip				= hChip;
	ui.Move_widget->hide();
	m_lwItem			= new QListWidgetItem;
	m_IsSelected = FALSE;
	m_IsMove = FALSE;
	INT		iIndex	= Chip_GetIndex( m_hChip, NULL );
	iIndex	= m_listWidChips->count() - iIndex;

	CRangeSlider::SStyle	sSty		= ui.widPlayProgress->GetStyle();
	sSty.eFormat	= CRangeSlider::eTextHMSAuto;
	sSty.bTextAlignBar	= true;
	sSty.sValueText.eAlign	= CRangeSlider::eAlignFar;
	sSty.sValueTextSub.eAlign	= CRangeSlider::eAlignFar;
	sSty.iPrecision	= 0;
	ui.widPlayProgress->SetStyle( sSty );
	ui.widPlayProgress->SetDispMode( CRangeSlider::eDispValue );
	m_pPlayTimer	= new QTimer( this );
	//m_pPlayTimer->setObjectName( "timPlayProgress" );
	//界面上的元件列表显示顺序与实际顺序是相反的，也就是最后添加的显示在最前。
	//所以新添加的元件始终插入显示列表顶端的位置。
	m_siBase	= size();

	m_listWidChips->insertItem( iIndex, m_lwItem );
	m_listWidChips->setItemWidget( m_lwItem, this );
	m_lwItem->setSizeHint( m_siBase );
	connect( m_pPlayTimer, SIGNAL(timeout()), this, SLOT(on_timPlayProgress_timeout( )) );


	if ( Sceen_GetCurChip( Render_GetCurScene() ) == m_hChip )
	{
		m_listWidChips->setCurrentRow( iIndex );
	}
	ui.butPlay->setEnabled( TRUE );
	ui.butPause->setEnabled( TRUE );

	ui.pushButton_Revise_Txt->hide();

	if( Chip_GetClassType( m_hChip ) == ePinInput_Text ) ui.pushButton_Revise_Txt->show();
	DisplaySourceName();

	//m_timer.start(500);
}

ChipItem::~ChipItem()
{
	m_hChip	= 0;
}

BOOL ChipItem::OnRenderNotify( QWidget * parentDialog,QListWidget* pList, IRender_ENotify eNotify, HSCENE hScene, int iValue )
{
	ChipItem*	pChItem	= NULL;
	SHORT		shLVal	= (SHORT)( iValue & 0xFFFF );
	SHORT		shHVal	= (SHORT)( iValue >> 16 );
	//因为列表的显示顺序和实际顺序相反，所以要先计算出当前删除的项目在显示列表中的位置。
	INT		iViewLow	= pList->count() - shLVal - 1;
	INT		iViewHigh	= pList->count() - shHVal - 1;
	if ( shLVal < 0 || iViewLow >= pList->count() ) iViewLow = -1;
	if ( shHVal < 0 || iViewHigh >= pList->count() ) iViewHigh = -1;

	switch( eNotify )
	{
	case eNotify_ChipAdding:
		break;
	case eNotify_ChipAdded:
		{
			ChipItem * chipItem =  new ChipItem( Scene_GetChip( hScene, shLVal ), pList , parentDialog);

			chipItem->LangageChange();
			chipItem->Init();
		}
		return TRUE;
	case eNotify_ChipDeleting:
		break;
	case eNotify_ChipDeleted:
		pChItem	= ChipItem::GetChipItem( pList, iViewLow );
		delete pList->takeItem( iViewLow );
		//删除 item 会引起列表的选中项改变，这里重设选中项。
		/*iViewLow = pList->currentRow();
		pChItem	= ChipItem::GetChipItem( pList, iViewLow );
		if ( pChItem ) Chip_SetCurent( pChItem->m_hChip );*/
		return TRUE;
	case eNotify_ChipPosing:
		break;
	case eNotify_ChipPosed:
		pChItem	= GetChipItem( pList, iViewLow );
		break;
	case eNotify_ChipRotating:
		break;
	case eNotify_ChipRotated:
		break;
	case eNotify_ChipSwitched:

		/*

		pChItem	= ChipItem::GetChipItem( pList, iViewHigh );
		if ( pChItem ) pChItem->OnChipSelected( TRUE );

		pChItem	= ChipItem::GetChipItem( pList, iViewHigh );
		if ( pChItem ) pChItem->OnChipSelected( TRUE );*/

		pList->setCurrentRow( iViewLow );
		return TRUE;
	case eNotify_ChipIndexChg:
		if ( iViewLow >= 0 && iViewHigh >= 0 )
		{
			ChipItem::MoveChipItem( parentDialog, pList, iViewLow, iViewHigh );
			return TRUE;
		}
		break;
	case eNotify_ChipStatus:
		{
			QListWidgetItem*	pItem	= pList->item( iViewLow );
			if ( pItem )
			{
				ChipItem*	pChip	= (ChipItem*)pList->itemWidget( pItem );
				pChip->DisplaySourceName();
				IPinInput_SStatusInfo	sChipStatus;
				if ( !Chip_GetStatusInfo( pChip->m_hChip, &sChipStatus ) )
				{
					return FALSE;
				}
				pChip->on_StatusChanged(sChipStatus);
				
			}
		}
		break;
	case eNotify_ChipVisible:
	case eNotify_ChipViewLock:
		if ( iValue >= 0 )
		{
			pChItem	= ChipItem::GetChipItem( pList, iViewLow );
			IPinInput_SStatusInfo	sChipStatus;
			if ( !Chip_GetStatusInfo( pChItem->m_hChip, &sChipStatus ) )
			{
				return FALSE;
			}
			pChItem->on_StatusChanged(sChipStatus);
		}
		break;
	case eNotify_ChipSourceSize:
		break;
	}

	return FALSE;
}

HCHIP ChipItem::GetChipHandle( QListWidget* pList, int iViewIndex )
{
	QListWidgetItem*	pItem	= pList->item( iViewIndex );
	if ( pItem )
	{
		ChipItem*	pChip	= (ChipItem*)pList->itemWidget( pItem );
		return pChip ? pChip->m_hChip : NULL;
	}
	return NULL;
}

ChipItem* ChipItem::GetChipItem( QListWidget* pList, int iViewIndex )
{
	QListWidgetItem*	pItem	= pList->item( iViewIndex );
	if ( pItem )
	{
		ChipItem*	pChip	= (ChipItem*)pList->itemWidget( pItem );
		return pChip;
	}
	return NULL;
}

BOOL ChipItem::MoveChipItem(QWidget * parentDialog, QListWidget* pList, int iViewFrom, int iViewTo )
{
	QListWidgetItem*	pItem	= pList->item( iViewFrom );
	if ( pItem )
	{
		ChipItem*	pChip	= (ChipItem*)pList->itemWidget( pItem );
		if ( pChip )
		{
			HCHIP	hChip	= pChip->m_hChip;;
			delete pList->takeItem( iViewFrom );
			ChipItem * chipItem =  new ChipItem( hChip, pList , parentDialog );
			chipItem->LangageChange();
			if( hChip == Sceen_GetCurChip(Render_GetCurScene()) ) 
			{
				chipItem->OnChipSelected( true );
				QListWidgetItem*	pItem1	= pList->item( iViewTo );
				ChipItem*	pChip1	= (ChipItem*)pList->itemWidget( pItem1 );
				pChip1->OnChipSelected( false );
			}
			else
			{
				chipItem->OnChipSelected( false );
				QListWidgetItem*	pItem1	= pList->item( iViewTo );
				ChipItem*	pChip1	= (ChipItem*)pList->itemWidget( pItem1 );
				pChip1->OnChipSelected( true );
			}
			return TRUE;
		}
	}
	return FALSE;
}

void ChipItem::OnPosChanged()
{

}

void ChipItem::on_chkHideChip_clicked( bool checked )
{
	Chip_SetVisible( m_hChip, checked ? FALSE : TRUE );
}

void ChipItem::on_butMiddle_clicked( bool checked )
{
	FLOAT fWidth, fHeight;
	Chip_GetRectPercent( m_hChip, NULL, NULL, &fWidth, &fHeight, FALSE );
	IChip_EBorderFitMode	eFitMode	= Chip_GetViewLock( m_hChip, eLock_AspectRatio ) ? eKeepAspectRatio : eIgnoreAspectRatio;
	Chip_SetRectPercent( m_hChip, ( 1.0f - fWidth ) * 0.5f, ( 1.0f - fHeight ) * 0.5f, fWidth, fHeight, eFitMode );
}

void ChipItem::on_butScaleFull_clicked( bool checked )
{
	IChip_EBorderFitMode	eFitMode	= eIgnoreAspectRatio;
	FLOAT fX, fY, fWidth, fHeight;
	Chip_GetRectPercent( m_hChip, &fX, &fY, &fWidth, &fHeight, FALSE );
	if ( Chip_GetViewLock( m_hChip, eLock_AspectRatio ) )
	{
		if ( ( fX == 0.0f && fWidth == 1.0f && fY >= 0.0f && fHeight <= 1.0f ) ||
			( fX >= 0.0f && fWidth <= 1.0f && fY == 0.0f && fHeight == 1.0f ) )
		{
			eFitMode	= eKeepAspectRatioByExpanding;
		}
		else
		{
			eFitMode	= eKeepAspectRatio;
		}
	}
	Chip_SetRectPercent( m_hChip, 0.0f, 0.0f, 1.0f, 1.0f, eFitMode );
}

void ChipItem::OnChipSelected( BOOL bSelect /*= TRUE */ )
{
	if ( bSelect )
	{
		m_IsSelected = FALSE;
		ui.Close_Chip_pushButton->hide();
		ui.widget->setStyleSheet( 
			"QWidget{"
			"background-color: rgb(39, 40, 45);"
			"}"
			);
		QString str = "QLabel{background-color: rgb(39, 40, 45);";
		str.append(m_strPinInput);
		str.append("}");
		ui.label_2->setStyleSheet( 
			str
			);
		if ( m_eClassType == ePinInput_Movie )
		{
			ui.Move_widget->hide();
			IPinInput_SStatusInfo	sChipStatus;
			if ( !Chip_GetStatusInfo( m_hChip, &sChipStatus ) )
			{
				return;
			}
			on_StatusChanged(sChipStatus);
		}
	}
	else
	{
		m_IsSelected = TRUE;
		ui.Close_Chip_pushButton->show();
		ui.widget->setStyleSheet( 
			"QWidget{"
			"background-color: rgb(35, 36, 40);"
			"}"
			);
		QString str = "QLabel{background-color: rgb(35, 36, 40);";
		str.append(m_strPinInput);
		str.append("}");
		ui.label_2->setStyleSheet( 
			str
			);
		if ( m_eClassType == ePinInput_Movie )
		{
			ui.Move_widget->show();
		}
	}
	IPinInput_SStatusInfo	sChipStatus;
	if ( !Chip_GetStatusInfo( m_hChip, &sChipStatus ) )
	{
		return;
	}

	//DisplaySourceName();
}

void ChipItem::DisplaySourceName()
{
	m_eClassType	= Chip_GetClassType( m_hChip );
	QString	szName =  QFU(Chip_GetFriendlyName(m_hChip));
	QFontMetrics	fm( ui.labSourceName->font() );
	QString		szOptDefault	= QFU( (PWORD)RDLive_DefaultDir( RDir_Application ) ) + "TipsImage\\OperatingHints.png";

	szName = szName.replace(QRegExp("\\/"), "\\");
	if (  szName.contains(szOptDefault, Qt::CaseInsensitive) )
	{
		szName = QFU( (LPWSTR)RdzbDemo::InstanceIniWOrR().
			GetCurrentLanguagePrivateProfileString(L"RdzbDemoMain",L"OperationNotice") );
	}
	szName	= fm.elidedText( szName, Qt::ElideLeft, ui.labSourceName->width() );
	ui.labSourceName->setText( szName );

	switch( Chip_GetClassType(m_hChip) )
	{
	case ePinInput_Picture:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_Picture.png)";
		break;
	case ePinInput_Camera:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_q.png)";
		break;
	case ePinInput_Screen:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_q.png)";
		break;
	case ePinInput_Flash:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_Flash.png)";
		break;
	case ePinInput_Movie:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_Movie.png)";
		break;
	case ePinInput_Game:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_q.png)";
		break;
	case ePinInput_Text:
		m_strPinInput = "border-image: url(:/UI/Resources/Chip/Mark_Text.png)";
		break;
	}
}

void ChipItem::on_Up_Chip_pushButton_clicked()
{
	m_IsMove= TRUE;
	Chip_SetIndex( m_hChip, Chip_GetIndex( m_hChip, NULL ) + 1 );
}

void ChipItem::on_Down_Chip_pushButton_clicked()
{
	m_IsMove= TRUE;
	Chip_SetIndex( m_hChip, Chip_GetIndex( m_hChip, NULL ) - 1 );
}

void ChipItem::on_Close_Chip_pushButton_clicked()
{
	if( m_IsSelected )
		Chip_Destroy( m_hChip );
}

void ChipItem::on_butPlay_clicked()
{
	Chip_Play( m_hChip );
	Chip_SetCurent( m_hChip );
	ui.butPlay->hide();
	ui.butPause->show();
	ui.butStop->setEnabled( TRUE );
}

void ChipItem::on_butPause_clicked()
{
	Chip_Pause( m_hChip );

	Chip_SetCurent( m_hChip );
	OnChipSelected(FALSE);
	ui.butPlay->show();
	ui.butPause->hide();
	ui.butStop->setEnabled( false );
}

void ChipItem::on_butStop_clicked()
{
	Chip_Stop( m_hChip );

	Chip_SetCurent( m_hChip );
	OnChipSelected(FALSE);
	ui.butPlay->show();
	ui.butPause->hide();
	ui.butStop->setEnabled( false );
}

void ChipItem::on_chkMute_clicked( bool checked )
{
	Chip_SetMute( m_hChip, checked );
	if ( checked )
	{
		ui.horizontalSlider->setEnabled(false);
	} 
	else
	{
		ui.horizontalSlider->setEnabled(TRUE);
	}
	Chip_SetCurent( m_hChip );
}

void ChipItem::on_StatusChanged( const IPinInput_SStatusInfo& sChipStatus )
{
	struct	SControlEnabled
	{
		bool	bPlayProgress;
		bool	bPlayVolume;
		bool	bButPlay;
		bool	bButPause;
		bool	bButStop;
		bool	bChkMute;
	}enableList	= {0};

	IPinInput_SCharacteristics	sChipCharact	= {0};
	Chip_GetCharacteristics( m_hChip, &sChipCharact );
	if ( sChipStatus.eStatus >= ePin_Closed && sChipStatus.eStatus < ePin_Closing )
	{
		//设置播放进度的时间
		ui.widPlayProgress->SetRange( 0.0f, sChipStatus.fSecondCount );
		if ( sChipStatus.bIsRange )
		{
			ui.widPlayProgress->SetArea( sChipStatus.fSecondStart, sChipStatus.fSecondEnd );
		}
		else
		{
			ui.widPlayProgress->SetArea( 0.0f, sChipStatus.fSecondCount );
		}
		ui.butPlay->setChecked( sChipStatus.bIsLoop );

		ui.chkMute->setChecked( sChipStatus.bIsMute );
		if ( sChipStatus.bIsMute )
		{
			ui.horizontalSlider->setEnabled(false);
		}
		else
		{
			ui.horizontalSlider->setEnabled(TRUE);
		}
	}
	//进度条等添加出
	if ( sChipStatus.eStatus == ePin_Played )
	{
		m_pPlayTimer->setSingleShot( false );
		m_pPlayTimer->setInterval( 20 );
		m_pPlayTimer->start();
	}
	else
	{
		m_pPlayTimer->stop();
	}

	IPinInput_SStatusInfo	sChipStatus1;
	if ( !Chip_GetStatusInfo( m_hChip, &sChipStatus1 ) )
	{
		return;
	}
	ui.horizontalSlider->setValue( (int)(sChipStatus1.fVolume*100.0f + 0.005f) );
	//按钮修改
	switch( sChipStatus.eStatus )
	{
	case ePin_None:		//没有设置源
		break;
	case ePin_Error:		//源错误
	case ePin_Closed:	//已经关闭
		enableList.bButPlay	= true;
		break;
	case ePin_Opened:	//源打开完成
		enableList.bButPlay			= sChipCharact.bTunableStop || sChipCharact.bTunablePause;
		enableList.bPlayProgress	= sChipCharact.bTunableSeek;
		enableList.bPlayVolume		= sChipCharact.bTunableVolume;
		enableList.bChkMute			= sChipCharact.bTunableMute;
		break;
	case ePin_Stoped:	//源已经停止
		enableList.bButPlay			= sChipCharact.bTunableStop || sChipCharact.bTunablePause;
		break;
	case ePin_Paused:	//已经暂停
		enableList.bButPlay			= sChipCharact.bTunableStop || sChipCharact.bTunablePause;
		enableList.bButStop			= sChipCharact.bTunableStop;
		enableList.bPlayProgress	= sChipCharact.bTunableSeek;
		enableList.bPlayVolume		= sChipCharact.bTunableVolume;
		enableList.bChkMute			= sChipCharact.bTunableMute;
		break;
	case ePin_Played:	//正在播放
		enableList.bButPause		= sChipCharact.bTunablePause;
		enableList.bButStop			= sChipCharact.bTunableStop;
		enableList.bPlayProgress	= sChipCharact.bTunableSeek;
		enableList.bPlayVolume		= sChipCharact.bTunableVolume;
		enableList.bChkMute			= sChipCharact.bTunableMute;
		break;

	case ePin_Closing:	//正在关闭
		break;
	case ePin_Opening:	//正在打开
		break;
	case ePin_Stoping:	//正在停止
		break;
	case ePin_Pausing:	//正在暂停
		break;
	case ePin_Loading:	//正在载入
		return;
		break;
	}

	if (enableList.bButPlay)
	{
		ui.butPlay->show();
		ui.butPause->hide();
	}
	else
	{
		ui.butPlay->hide();
		ui.butPause->show();
	}

	ui.butStop->setEnabled( enableList.bButStop );
	ui.chkMute->setEnabled( enableList.bChkMute );

	bool dfs = Chip_IsVisible( m_hChip );
	ui.chkHideChip->setChecked( !Chip_IsVisible( m_hChip ) );
}

void ChipItem::on_horizontalSlider_valueChanged( int value )
{
	Chip_SetVolume( m_hChip, ((FLOAT)value / 100.0f) );
	Chip_SetCurent( m_hChip );
}

void ChipItem::on_timPlayProgress_timeout	()
{
	IPinInput_SStatusInfo sChipStatus;
	if ( Chip_GetStatusInfo( m_hChip, &sChipStatus ) )
	{
		double	maxSec	= 0.0;
		ui.widPlayProgress->GetRange( NULL, &maxSec );
		if ( sChipStatus.fSecondPlay > maxSec )
		{
			ui.widPlayProgress->SetRange( 0, sChipStatus.fSecondPlay );
			ui.widPlayProgress->SetArea( 0, sChipStatus.fSecondPlay );
		}
		ui.widPlayProgress->SetValue( sChipStatus.fSecondPlay );
	}
}

QTime SecondToTime( double dSecond )
{
	int	iHour	= int( dSecond / 60.0 / 60.0 );
	dSecond	-= iHour * 60.0 * 60.0;
	int	iMinute	= int( dSecond / 60.0 );
	dSecond	-= iMinute * 60.0;
	int	iSecond	= int( dSecond );
	dSecond	-= iSecond;
	return QTime( iHour, iMinute, iSecond, int( dSecond * 1000.0 ) );
}

void ChipItem::on_widPlayProgress_areaChanged( double fMin, double fMax )
{
	QTime	timRangeMin	= SecondToTime( fMin );
	QTime	timRangeMax	= SecondToTime( fMax );	
	ui.widPlayProgress->GetRange( &fMin, &fMax );
	QTime	timMin	= SecondToTime( fMin );
	QTime	timMax	= SecondToTime( fMax );
}

void ChipItem::on_widPlayProgress_valueChanged( double fValue )
{
	//设置播放时间，单位是毫秒数。
	Chip_Seek( m_hChip, INT64( fValue * 1000 ), FALSE );
}

void ChipItem::on_pushButton_Revise_Txt_clicked()
{
	if( m_parentDialog != NULL ) ((RdzbDemo*)m_parentDialog)->CreateSubtitleModification( m_hChip );
}

void ChipItem::Init()
{

}

void ChipItem::LangageChange()
{
	//显隐提示
	RdzbDemo::setControlText( ui.chkHideChip,L"RdzbDemoChipItem", L"ImplicitCue",EPushButtonToolTip);

	//字幕修改提示
	RdzbDemo::setControlText( ui.pushButton_Revise_Txt,L"RdzbDemoChipItem", L"CaptionPrompt",EPushButtonToolTip);

	//正中提示
	RdzbDemo::setControlText( ui.butMiddle,L"RdzbDemoChipItem", L"MedianPrompt",EPushButtonToolTip);

	//铺满提示
	RdzbDemo::setControlText( ui.butScaleFull,L"RdzbDemoChipItem", L"TileTips",EPushButtonToolTip);

	//上移提示
	RdzbDemo::setControlText( ui.Up_Chip_pushButton,L"RdzbDemoChipItem", L"ShiftUpPrompt",EPushButtonToolTip);

	//下移提示
	RdzbDemo::setControlText( ui.Down_Chip_pushButton,L"RdzbDemoChipItem", L"ShiftDownPrompt",EPushButtonToolTip);

	//删除图像
	RdzbDemo::setControlText( ui.Close_Chip_pushButton,L"RdzbDemoChipItem", L"DeleteImage",EPushButtonToolTip);
}


