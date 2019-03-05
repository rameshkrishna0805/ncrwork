#include<Windows.h>
#include<stdio.h>
int main() {




	//BOOL IsTextUnicode(
	//	const VOID *lpv,
	//	int        iSize,
	//	LPINT      lpiResult
	//);


	WCHAR c[] =L"cd";
	char d[] = "ab";
	int n = wcslen(c)*sizeof(WCHAR);
	int res = IsTextUnicode(c,n, NULL);
	if (0 == res) {
		//ANSI CODE	
	}
	else {
		//UNICODE
		printf("%d is the val returned ,%d,%S\n", res, sizeof(c), c);
	}
	/*	int MultiByteToWideChar(
		UINT                              CodePage,
		DWORD                             dwFlags,
		_In_NLS_string_(cbMultiByte)LPCCH lpMultiByteStr,
		int                               cbMultiByte,
		LPWSTR                            lpWideCharStr,
		int                               cchWideChar
	);*/

	/*UTF - 16 (wide character)*/
	int wsize = MultiByteToWideChar(CP_UTF8,0, d, -1, NULL, 0);
	/*
	
	returns the size which includes the size of buffer required with the null character aswel
	
	*/
	printf("%d is buffer size required to convert multibyte to wide ", wsize);
	WCHAR * wchar = new WCHAR[wsize];
	int check = MultiByteToWideChar(CP_UTF8, 0, d, -1, wchar, wsize);
	if (0==check) {
		printf("ended with error code(%d)", GetLastError());
	}
	else {
		printf("\n%S is the wchar string copied\n", wchar);
	}
	/*
	
	int WideCharToMultiByte(
  UINT                               CodePage,//utf-8
  DWORD                              dwFlags,//0
  _In_NLS_string_(cchWideChar)LPCWCH lpWideCharStr,//wchar
  int                                cchWideChar,// -1 or size in characters
  LPSTR                              lpMultiByteStr,//NULL
  int                                cbMultiByte,//0
  LPCCH                              lpDefaultChar,//null
  LPBOOL                             lpUsedDefaultChar //null
);
	
	
	*/
	res = WideCharToMultiByte(CP_UTF8, 0, wchar, -1, NULL, 0, NULL, NULL);
	printf("%d is the size of the buffer req to store the respec unicode string\n", res);
	char *ch = new char[res];
	check=WideCharToMultiByte(CP_UTF8, 0, wchar, -1, ch, res, NULL, NULL);
	if (0 == check) {
		printf("error is %d \n", GetLastError());
	}
	else {
		printf("%s is the ansi string converted \n", ch);
	}
	getchar();
	return 1;


}