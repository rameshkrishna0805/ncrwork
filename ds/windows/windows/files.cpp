//#include<Windows.h>
//#include<stdio.h>
//#include<tchar.h>
//
//int main() {
//
//	//HANDLE CreateFileA(
//	//	LPCSTR                lpFileName,
//	//	DWORD                 dwDesiredAccess,
//	//	DWORD                 dwShareMode,
//	//	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
//	//	DWORD                 dwCreationDisposition,
//	//	DWORD                 dwFlagsAndAttributes,
//	//	HANDLE                hTemplateFile
//	//);
//
//	HANDLE hfile;
//	hfile = CreateFileA("sample2.txt",
//						GENERIC_READ |GENERIC_WRITE,
//						0,
//						NULL,
//						CREATE_ALWAYS,
//						FILE_ATTRIBUTE_NORMAL,
//						NULL);
//
//	if (hfile == INVALID_HANDLE_VALUE) {
//		_tprintf(_T("Not able to Creat the file"));
//		getchar();
//		return 0;
//	}
//	else {
//		_tprintf(_T("Created the file"));
//		getchar();
//	}
//
//	// writing into a file 
//
//	//BOOL WriteFile(
//	//	HANDLE       hFile,
//	//	LPCVOID      lpBuffer,
//	//	DWORD        nNumberOfBytesToWrite,
//	//	lpNumberOfBytesWritten
//	//	LPOVERLAPPED lpOverlapped
//	//);
//	CHAR *inputBuffer = "this is to be writtrn into a file";
//	DWORD nNumberOfBytesToWrite = strlen(inputBuffer);
//	DWORD lpNumberOfBytesWritten = 0;
//	BOOL bfileWriteReturn = WriteFile(hfile,
//									 inputBuffer,
//									nNumberOfBytesToWrite,
//									&lpNumberOfBytesWritten,
//									NULL);
//	if (bfileWriteReturn == FALSE) {
//		_tprintf(_T("Unable to write in a file"));
//		getchar();
//		return 0;
//	
//	}
//	else {
//		_tprintf(_T(" written in a file"));
//		getchar();
//		}
//	//setting the file pointer to begin of the file
//
//	//BOOL SetFilePointerEx(
//	//	HANDLE         hFile,
//	//	LARGE_INTEGER  liDistanceToMove,
//	//	PLARGE_INTEGER lpNewFilePointer,
//	//	DWORD          dwMoveMethod
//	//);
//	
//	/*LARGE_INTEGER large ;
//	large.QuadPart = 0;
//
//	BOOL offset = SetFilePointerEx(
//						  hfile,
//							large,
//						  NULL,
//							0);*/
//
//
//	// Reading the file contents into a buffer
//
//
//	//BOOL ReadFile(
//	//	HANDLE       hFile,
//	//	LPVOID       lpBuffer,
//	//	DWORD        nNumberOfBytesToRead,
//	//	LPDWORD      lpNumberOfBytesRead,
//	//	LPOVERLAPPED lpOverlapped
//	//);
//	getchar();
//	return 0;
//}