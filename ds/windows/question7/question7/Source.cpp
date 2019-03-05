#include<Windows.h>
#include<iostream>
int main(int argc, char *argv[])
{
	STARTUPINFO s;
	PROCESS_INFORMATION p;
	ZeroMemory(&s, sizeof(s));
	HANDLE h=CreateFile();
	BOOL x = CreateProcessA(
		NULL, argv[1],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&s,
		&p);
	BOOL x1 = CreateProcessA(
		NULL, argv[2],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&s1,
		&p1);
	if (x == true)
	{
		printf("process1 cretaed\n");
	}
	else
	{
		printf("\nnot cretated1 %d", GetLastError());
	}
	if (x1 == true)
	{
		printf("process2 cretaed\n");
	}
	else
	{
		printf("\nnot cretated2 %d", GetLastError());
	}

	system("pause");
	return 0;
}