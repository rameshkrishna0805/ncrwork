#include<iostream>
#include<Windows.h>
using namespace std;
//Write a program to create a thread in suspended state. Resume the thread after 5 seconds wait. 
//The thread should print integers from 1 to 1000 and return normally.
//Use getchar() in process’s primary thread to wait for user input and allow time for thread to return.
int main(int argc, char *argv[])
{

	PROCESS_INFORMATION pi;
	STARTUPINFO s;
	ZeroMemory(&s, sizeof(s));
	BOOL x = CreateProcessA(
		NULL, argv[1],
		NULL,
		NULL,
		false,
		NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&s,
		&pi);
	if (x == true)
	{
		cout << "crearted";
	}
	else
	{
		cout << "not created";
	}
	system("pause");
	return 0;
}