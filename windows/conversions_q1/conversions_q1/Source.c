#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *b = "ramesh";
	WCHAR *j = L"krishna";
	char *mb = NULL;
	WCHAR *wc = NULL;
	int x = strlen(b);
	int y = wcslen(j);
	int u = IsTextUnicode(b, sizeof(char)*x, NULL);
	int u1 = IsTextUnicode(j, sizeof(WCHAR)*y, NULL);
	if (u == 1)
	{
		printf("It is unicode");
	}
	else
		printf("it is not unicode");
	wc = (WCHAR *)malloc(sizeof(WCHAR)*(x + 1));
	int k = MultiByteToWideChar(CP_UTF8, 0, b, -1, wc, (x + 1));
	if (k == 0)
		printf("it cannot be converted : %d \n", GetLastError());
	else
		printf("can be converted : %S \n", wc);
	if (u1 == 1)
	{
		printf("It is unicode");
	}
	else
	{
		printf("it is not unicode");
	}
	int ml = WideCharToMultiByte(CP_UTF8, 0, j, -1, mb,0,NULL, NULL);
	mb = (char *)malloc(sizeof(char)*(ml));
	ml= WideCharToMultiByte(CP_UTF8, 0, j, -1, mb, ml, NULL, NULL);
	if (ml == 0)
	{
		printf("\ncna not be converted ,errors are %d", GetLastError());
	}
	else
	{
		printf("\ncan be converted %s", mb);
	}
	system("pause");
	return 0;
}