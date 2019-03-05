#include<iostream>
#include<Windows.h>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID lpParam);
int main()
{
	char content[100];
	cout << "-----IN MAIN-----" << endl;
	cout << "Enter the parameter to be passed to the thread";
	cin >> content;
	HANDLE hand=CreateThread(
		NULL,
		0,
		ThreadFunction,
		content,
		0,
		NULL
	);
	if (hand==NULL)
	{
		cout << "Could not Create a Thread" << endl;
	}
	system("pause");
	return 0;
}
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
	cout << "-----IN Thread-----" << endl;
	cout << "The Parameters Passed to thread are - " << (char *)lpParam;
	return 0;
}