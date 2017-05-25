#include "stdafx.h"
#include "settingdialog.h"
#include "rdzbdemo.h"
SettingDialog::SettingDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
	m_pant = NULL;

	ui.TiletelineEdit->setContextMenuPolicy(Qt::NoContextMenu);
	ui.Rtmp_lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
	ui.File_lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
	ui.File_spinBox->setContextMenuPolicy(Qt::NoContextMenu);
	ui.Bitrate_spinBox->setContextMenuPolicy(Qt::NoContextMenu);

	ui.File_lineEdit->setEnabled(false);
	ui.browse_pushButton->setEnabled(false);
	ui.View_pushButton->setEnabled(false);
	ui.File_comboBox->setEnabled(false);
	ui.File_spinBox->setEnabled(false);
	ui.Rtmp_lineEdit->setEnabled(false);
}

SettingDialog::~SettingDialog()
{

}

void SettingDialog::on_Close_pushButton_clicked()
{
	if ( m_pant != NULL )
	{
		((RdzbDemo*)m_pant)->SettingLive();
		((RdzbDemo*)m_pant)->SettingVideo();
	}
	close();
}

bool SettingDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.label_2 || pWid == ui.label ||  pWid == ui.widget  )
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void SettingDialog::on_Cancel_pushButton_clicked()
{
	if ( m_pant != NULL )
	{
		((RdzbDemo*)m_pant)->SettingLive();
		((RdzbDemo*)m_pant)->SettingVideo();
	}
	close();
}

void SettingDialog::on_OK_pushButton_clicked()
{
	if(  !Save( true ) )
		return;
	close();
}

void SettingDialog::on_Video_pushButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void SettingDialog::on_Auido_pushButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void SettingDialog::on_Live_pushButton_clicked()
{	
	ui.stackedWidget->setCurrentIndex(2);
}

void SettingDialog::on_Langage_pushButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(3);
}

void SettingDialog::Refresh_Auido()
{	
	//扬声器
	ui.Speaker_comboBox->clear();
	int iSpeakerCount = Audio_GetDevCount( eAudCap_Speaker );
	for ( int i = 0; i < iSpeakerCount; i++ )
	{
		QFontMetrics	fm( ui.Speaker_comboBox->font() );
		QString szName = fm.elidedText( QFU(Audio_GetDevName(eAudCap_Speaker,i)), Qt::ElideRight, ui.Speaker_comboBox->width() );
		ui.Speaker_comboBox->addItem( szName ,QFU( Audio_GetDevId( eAudCap_Speaker, i ) ) );
		if ( QFU(Audio_GetCurrent(eAudCap_Speaker)) == QFU(Audio_GetDevId( eAudCap_Speaker, i )) )
		{
			ui.Speaker_comboBox->setCurrentIndex( i );
		}
	}
	//麦克风
	ui.MIC_comboBox->clear();
	int iMICCount = Audio_GetDevCount( eAudCap_Microphone );
	for ( int i = 0; i < iMICCount; i++ )
	{
		QFontMetrics	fm( ui.MIC_comboBox->font() );
		QString szName = fm.elidedText( QFU(Audio_GetDevName(eAudCap_Microphone,i)), Qt::ElideRight, ui.MIC_comboBox->width() );
		ui.MIC_comboBox->addItem( szName ,QFU( Audio_GetDevId( eAudCap_Microphone, i ) ) );
		if ( QFU(Audio_GetCurrent(eAudCap_Microphone)) == QFU(Audio_GetDevId( eAudCap_Microphone, i )) )
		{
			ui.MIC_comboBox->setCurrentIndex( i );
		}
	}
}

void SettingDialog::on_Resolution_comboBox_currentIndexChanged( int index )
{	
	SetBitrate();
}

void SettingDialog::on_FPS_comboBox_currentIndexChanged( int index )
{
	SetBitrate();
}

void SettingDialog::SetBitrate()
{
	QString szResolution = ui.Resolution_comboBox->currentText();
	int iNumber = szResolution.indexOf("x"); 
	QString szWidth =  szResolution.mid(0,iNumber);
	QString szHeight = szResolution.mid(iNumber+1);
	int width = szWidth.toInt();
	int height = szHeight.toInt();
	int fps = ui.FPS_comboBox->currentText().toInt();
	RdzbDemo::BitrateStatic bitrateStatic = RdzbDemo::GetBitrate(width,height,fps);

	ui.Bitrate_spinBox->setMaximum(bitrateStatic.iBitrateMaximum);
	ui.Bitrate_spinBox->setMinimum(bitrateStatic.iBitrateMinimum);
	ui.Bitrate_spinBox->setValue(bitrateStatic.iBitrate);
}

void SettingDialog::on_View_pushButton_clicked()
{
	if ( CheckMovieSaveDir( TRUE ) )
	{
		ShellExecute( winId(), L"explore", (LPCWSTR)ui.File_lineEdit->text().utf16(), NULL, NULL, SW_SHOW );
	}
}

void SettingDialog::on_browse_pushButton_clicked()
{
	QString	szDir	= QFileDialog::getExistingDirectory( this,
	QFU((LPWSTR)RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoParameterSetting",L"SelectVideoFolder") ), 
		ui.File_lineEdit->text(), QFileDialog::ShowDirsOnly );
	if ( !szDir.isEmpty() )
	{
		ui.File_lineEdit->setText( szDir );
	}
}	

bool SettingDialog::CheckMovieSaveDir( BOOL bPopMsg /*= FALSE */ )
{
	bool	bUseDefault	= false;
	if ( ui.File_lineEdit->text().isEmpty() )
	{
		bUseDefault	= true;
	}
	else
	{
		QDir	dir( ui.File_lineEdit->text() );
		if ( !dir.exists() && !dir.mkpath( ui.File_lineEdit->text() ) )
		{
			if ( bPopMsg )
			{
				if ( QMessageBox::Ok == QMessageBox::question( window(), QFU((LPWSTR)RdzbDemo::InstanceIniWOrR().
						GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptVideoFolder")),
					QFU((LPWSTR)RdzbDemo::InstanceIniWOrR().
						GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptVideoFolderError")), 
					QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok ) )
				{
					bUseDefault	= true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				bUseDefault	= true;
			}
		}
	}
	if ( bUseDefault )
	{
		ui.File_lineEdit->setText( QFU( RDLive_DefaultDir( RDir_Videos ) ) );
	}
	return true;
}

void SettingDialog::on_Win7_MOUSE_checkBox_clicked( bool checked )
{
	Cursor_EnableCapture( checked );
}

void SettingDialog::on_Win7_Aero_checkBox_clicked(  bool checked  )
{
	Screen_SetAutoEnableAero( checked );
}

void SettingDialog::LangageChange()
{
	//参数设置
	RdzbDemo::setControlText( ui.label_2,L"RdzbDemoParameterSetting", L"ParameterSetting",ELabel);
	//视频
	RdzbDemo::setControlText( ui.Video_pushButton,L"RdzbDemoParameterSetting", L"Video",EButton);
	{
		//分辨率
		RdzbDemo::setControlText( ui.label_3,L"RdzbDemoParameterSetting", L"ResolutionRatio",ELabel);
		//帧率
		RdzbDemo::setControlText( ui.label_4,L"RdzbDemoParameterSetting",L"FrameRate",ELabel);
		//码率
		RdzbDemo::setControlText( ui.label_5,L"RdzbDemoParameterSetting", L"CodeCheck",ELabel);
		//鼠标录制指针
		RdzbDemo::setControlText( ui.Win7_MOUSE_checkBox,L"RdzbDemoParameterSetting", L"AllowMousePointer",ECheckBox);
		//关闭Aero
		RdzbDemo::setControlText( ui.Win7_Aero_checkBox,L"RdzbDemoParameterSetting", L"TurnOffWin7AeroEffect",ECheckBox);
	}

	//声音
	RdzbDemo::setControlText( ui.Auido_pushButton,L"RdzbDemoParameterSetting", L"Sound",EButton);
	{
		//麦克分选择
		RdzbDemo::setControlText( ui.label_8,L"RdzbDemoParameterSetting", L"MicrophoneSelection",ELabel);
		//系统声音
		RdzbDemo::setControlText( ui.label_9,L"RdzbDemoParameterSetting", L"SystemSound",ELabel);
	}

	//直播设置
	RdzbDemo::setControlText( ui.Live_pushButton,L"RdzbDemoParameterSetting", L"LiveSetup",EButton);
	{
		//标题
		RdzbDemo::setControlText( ui.label_13,L"RdzbDemoParameterSetting", L"Title",ELabel);
		//Rtmp流
		RdzbDemo::setControlText( ui.label_12,L"RdzbDemoParameterSetting", L"RtmpFlow",ELabel);
		//保存目录
		RdzbDemo::setControlText( ui.label_11,L"RdzbDemoParameterSetting", L"SaveContents",ELabel);
		//浏览
		RdzbDemo::setControlText( ui.browse_pushButton,L"RdzbDemoParameterSetting", L"LookThrough",EButton);
		//查看
		RdzbDemo::setControlText( ui.View_pushButton,L"RdzbDemoParameterSetting", L"LookOver",EButton);
		//文件格式
		RdzbDemo::setControlText( ui.label_14,L"RdzbDemoParameterSetting", L"FileFormats",ELabel);
		//文件分卷
		RdzbDemo::setControlText( ui.label_15,L"RdzbDemoParameterSetting", L"VolumeFile",ELabel);
	}

	//语言
	RdzbDemo::setControlText( ui.Langage_pushButton,L"RdzbDemoParameterSetting", L"Language",EButton);
	RdzbDemo::setControlText( ui.label_6,L"RdzbDemoParameterSetting", L"Language",ELabel);
	
	//确认
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoParameterSetting", L"Acknowledgement",EButton);

	//取消
	RdzbDemo::setControlText( ui.Cancel_pushButton,L"RdzbDemoParameterSetting", L"Cancel",EButton);
}

void SettingDialog::SetLangageList()
{
	int count = RdzbDemo::InstanceIniWOrR().Count();
	for( int i = 0; i < count; i++ )
	{
		QString display( "display" );
		display.append( QString::number( i+1 ) );
		QString displayName( QFU( RdzbDemo::InstanceIniWOrR().
			GetLanguagePrivateProfileString( L"language-list", display.utf16() ) ) );

		QString file( "file" );
		file.append( QString::number( i+1 ) );
		QString fileName( QFU( RdzbDemo::InstanceIniWOrR().
			GetLanguagePrivateProfileString( L"language-list", file.utf16() )  ) );
	
		ui.Language_comboBox->addItem( displayName ,fileName );
	}
}

void SettingDialog::on_Language_comboBox_currentIndexChanged( int index )
{
	QString strPath( QCoreApplication::applicationDirPath () );
	strPath.replace(QRegExp("/"),"\\");
	strPath.append( "\\language\\" );
	strPath.append( ui.Language_comboBox->itemData(index).toString() );

	RdzbDemo::InstanceIniWOrR().CCurrentLanguagePath( (LPWSTR)strPath.utf16() );

	RdzbDemo::InstanceIniWOrR().WriteLanguagePrivateProfileString(L"language-default",L"displayname",ui.Language_comboBox->currentText().utf16());
	
	RdzbDemo::InstanceIniWOrR().WriteLanguagePrivateProfileString(L"language-default",L"filename",ui.Language_comboBox->itemData(index).toString().utf16());

	if( m_pant ) ((RdzbDemo*)m_pant)->SwitchingLanguage();
}

void SettingDialog::on_File_checkBox_clicked( bool checked )
{
	if( !checked )
	{
		ui.File_lineEdit->setEnabled(false);
		ui.browse_pushButton->setEnabled(false);
		ui.View_pushButton->setEnabled(false);
		ui.File_comboBox->setEnabled(false);
		ui.File_spinBox->setEnabled(false);
	}
	else
	{
		ui.File_lineEdit->setEnabled(TRUE);
		ui.browse_pushButton->setEnabled(TRUE);
		ui.View_pushButton->setEnabled(TRUE);
		ui.File_comboBox->setEnabled(TRUE);
		ui.File_spinBox->setEnabled(TRUE);
	}
}

void SettingDialog::on_Rtmp_checkBox_clicked( bool checked )
{
	if( !checked )
	{
		ui.Rtmp_lineEdit->setEnabled(false);
	}
	else
	{
		ui.Rtmp_lineEdit->setEnabled(TRUE);
	}
}

bool SettingDialog::Save( bool isSurface )
{
	if( (!ui.Rtmp_checkBox->isChecked()) && ( !ui.File_checkBox->isChecked() ) )
	{
		LPWSTR str = L"AndroidSimulationError11";
		if ( isSurface )
			str = L"AndroidSimulationError1";
		QMessageBox::warning(this,
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"AndroidSimulation")),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",str)),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );

		return false;
	}

	if( ui.TiletelineEdit->text().isEmpty() )
	{
		QString str = QFU(RdzbDemo::InstanceIniWOrR().
			GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptCodingOutputError")
			);
		str.append('\n');
		str.append(QFU(RdzbDemo::InstanceIniWOrR().
			GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptCodingOutputError2")
			));
		QMessageBox::warning( window(), 
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptCodingOutput")),
			str,
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
		return false;
	}

	if( ui.File_checkBox->isChecked() ) 
	{
		if( ui.File_lineEdit->text().isEmpty() )
		{
			LPWSTR str = L"AndroidSimulationError21";
			if ( isSurface )
				str = L"AndroidSimulationError2";
			QMessageBox::warning(this,
				QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"AndroidSimulation")),
				QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",str)),
				QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement"))  );
			return false;
		}

	}

	if( ui.Rtmp_checkBox->isChecked() )
	{
		if( ui.Rtmp_lineEdit->text().isEmpty() )
		{
			LPWSTR str = L"AndroidSimulationError41";
			if ( isSurface )
				str = L"AndroidSimulationError4";
			QMessageBox::warning(this,QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"AndroidSimulation")),
				QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",str)),
				QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
			return false;
		}
	}

	bool isBegin = false;
	//设置视频编码参数
	if( m_pant ) isBegin = ((RdzbDemo*)m_pant)->SaveProfile(TRUE);
	return isBegin; 
}

void SettingDialog::keyPressEvent( QKeyEvent *event )
{
	switch (event->key())
	{
	case Qt::Key_Escape:
		if ( m_pant != NULL )
		{
			((RdzbDemo*)m_pant)->SettingLive();
			((RdzbDemo*)m_pant)->SettingVideo();
		}
		close();
		break;
	default:
		QDialog::keyPressEvent(event);
	}
}
