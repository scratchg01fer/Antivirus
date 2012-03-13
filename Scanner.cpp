#include "stdafx.h"
#include "Scanner.h"

#include <windows.h>


void Scanner::Scan(DirectoryInfo* dirinfo)
{
	FileInfo* fi[] = dirinfo->GetFiles();
	for(int i=0; i<fi.Length; i++)
	{
		CheckFileSignature(fi[i]);
	}
	return;



}
bool Scanner::CheckFileSignature(FileInfo* fileinfo)
{
	return true;



}