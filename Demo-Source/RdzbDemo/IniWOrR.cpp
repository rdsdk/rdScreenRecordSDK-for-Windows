#include "stdafx.h"
#include "IniWOrR.h"

IniWOrR::IniWOrR(void)
{

}

IniWOrR::~IniWOrR(void)
{

}

void IniWOrR::CLanguagePath( LPWSTR LanguagePath )
{
	m_LanguagePath = LanguagePath;
}

void IniWOrR::CCurrentLanguagePath( LPWSTR CurrentLanguagePath  )
{	
	m_CurrentLanguagePath = CurrentLanguagePath;
}


int IniWOrR::Count()
{
	return GetPrivateProfileInt( L"language-list", L"Count" , 0, m_LanguagePath.c_str() );
}


LPCTSTR IniWOrR::GetLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName )
{
	wchar_t * ReturnString = new wchar_t[255];
	if( GetPrivateProfileString( lpAppName,lpKeyName,0,ReturnString,255, m_LanguagePath.c_str() ) )
		return ReturnString;
	else
		return NULL;
}

BOOL  IniWOrR::WriteLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName, LPCTSTR lpString )
{
	if( WritePrivateProfileString( lpAppName,lpKeyName,lpString, m_LanguagePath.c_str() ) )
		return true;
	else
		return false;
}

LPCTSTR IniWOrR::GetCurrentLanguagePrivateProfileString( LPCTSTR lpAppName,LPCTSTR lpKeyName )
{
	wchar_t * ReturnString = new wchar_t[255];
	if( GetPrivateProfileString( lpAppName,lpKeyName,0,ReturnString,255, m_CurrentLanguagePath.c_str() ) )
		return ReturnString;
	else
		return NULL;
}