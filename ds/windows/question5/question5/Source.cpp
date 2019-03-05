#include<iostream>
#include<stdio.h>
#include<Windows.h>
using namespace std;
int main(int argc,char *argv[])
{
	HANDLE h;
	h= CreateFileA(argv[1], GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (h == INVALID_HANDLE_VALUE)
	{
		cout << "Could not create a File" << endl;
	}
	else
	{
		char content[100];
		DWORD BytesWritten;
		cout << "Enter the string to be written" << endl;
		cin>>content;
		int flag = WriteFile(h,content,strlen(content),&BytesWritten,NULL);
		if(flag == 0)
		{
		cout << "Failed to Write to File" << endl;
		}
		else if (BytesWritten != strlen(content))
		{
			printf("Written %ld bytes to the file", BytesWritten);
		}
		else
		{
			cout << endl << "Successful" << endl;
		}
	}
	system("pause");
}