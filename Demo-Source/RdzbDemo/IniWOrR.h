#pragma once

class IniWOrR
{
public:
	IniWOrR(void);
	~IniWOrR(void);

	void CLanguagePath( LPWSTR LanguagePath );//语言选择的路径
	int Count();//语言的数量
	LPCTSTR GetLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName );//获取语言选择ini文件string
	BOOL  WriteLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName, LPCTSTR lpString );//写入当前语言的

	void CCurrentLanguagePath( LPWSTR CurrentLanguagePath  );//当前语言的路径
	LPCTSTR GetCurrentLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName );//获取语言ini文件string

private: 
	wstring m_LanguagePath;//语言选择的保存文件和语言列表
	wstring m_CurrentLanguagePath;//当前语言的
};
