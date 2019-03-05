#include<iostream>
#include<Windows.h>
using namespace std;
int main(int argc,char *argv[])
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
	cout<<"current process id \n:"<<GetCurrentProcessId();
	cout<<"thread id\n"<<GetThreadId(pi.hThread);
	cout<<"getprocessid:\n"<<GetProcessId(
		pi.hProcess
	);
	cout<<"current thread id\n"<<GetCurrentThreadId(

	);
	
		system("pause");
	return 0;
}