#include "stdafx.h"
#include "Scanner.h"

#include <windows.h>


void Scanner::Scan(DirectoryInfo* dirinfo)
{
	try{

	FileInfo* fi[] = dirinfo->GetFiles();
	for(int i=0; i<fi.Length; i++)
	{
		CheckFileSignature(fi[i]);
	}

	DirectoryInfo* di[] = dirinfo->GetDirectories();
	for(int i=0; i<di.Length; i++)
	{
		Scan(di[i]);
	}


	}
	catch(Exception *e)
	{
		Debug::WriteLine(e->Message);

	}
}




bool Scanner::CheckFileSignature(FileInfo* fileinfo)
{
	try
	{
		FileStream* fs=fileinfo->OpenRead();
		BinaryReader* br=new BinaryReader(fs);
		Debug::Write(fileinfo->get_Name());
		for(int i=0; i<20; i++)
		{
//			Debug::Write(br->ReadByte());
			Debug::Write("Read Byte");
		}
	}
	catch(Exception *e)
	{
		Debug::WriteLine(e->Message);
		return false;
	
	}

	return true;
}