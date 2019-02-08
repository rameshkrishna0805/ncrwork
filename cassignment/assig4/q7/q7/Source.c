#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	char a[10][10];
	for (int i = 0;i < n;i++)
	{
		//gets(a[i]);
		scanf_s("%s", a[i],10);
	}
	for (int j = 0;j < n;j++)
	{
		for (int i = j + 1;i < n;i++)
		{
			char s[10];
			if (strcmp(a[j],a[i]) > 0)
			{
				strcpy_s(s,10,a[i]);
				strcpy_s(a[i],10,a[j]);
				strcpy_s(a[j],10,s);
			}
		}
		
	}
	for (int i = 0;i < n;i++)
	{
		printf("%s", a[i]);
	}
	getch();
	return 0;
}