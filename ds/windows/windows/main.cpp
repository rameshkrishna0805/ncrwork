//#include<windows.h>
//#include<stdio.h>
//int main() {
//	//LPWSTR * CommandLineToArgvW(
//	//	LPCWSTR lpCmdLine,
//	//	int     *pNumArgs
//	////);
//	//DWORD WINAPI ExpandEnvironmentStrings(
//	//	_In_      LPCTSTR lpSrc,
//	//	_Out_opt_ LPTSTR  lpDst,
//	//	_In_      DWORD   nSize
//	//);
//
//	LPWSTR *arglist;
//	int nArgs;
//
//	arglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
//	if (NULL == arglist) {
//		wprintf(L"No commandline arguments");
//	
//	}
//	else {
//		for (int i = 0; i < nArgs; i++) {
//			printf("%d :%S \n", i, arglist[i]);
//		}
//	}
//	//using ExpandEnvironmentStrings
//
//	 
//
//	getchar();
//}