#include<windows.h>
#include<stdio.h>
#include<tchar.h>

//int _tmain(int argc,TCHAR *argv[],TCHAR *env[])
int main()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	HANDLE hProcess;
	HANDLE hThread;
	DWORD dwProcessId = 0;
	DWORD dwThreadId = 0;
	BOOL x = NULL;
	x=CreateProcess(L"C:\\Users\\cdac\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Accessories\\notepad.exe",NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	if (!x)
		printf("Creating Process . Error(%d)", GetLastError());
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	printf("%d", pi.hProcess);
	printf("%d", pi.dwProcessId);
	printf("%d", pi.dwThreadId);

	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	getchar();
	return 0;
}