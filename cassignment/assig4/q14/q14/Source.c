#include<stdio.h>
int main()
{
	char s[10] = "space";
	int f = 0,l=0;
	char arr[10];
	for (int i = 0;s[i] != '\0';i++)
	{
		l++;

	}
	int n = l;
	for (int i = 0;i<n;i++)
	{
		char c;
		int k = 0;
		c = s[i];
		int j = 0;
		while(s[k] != '\0')
		{
			arr[j++] = s[k++;]
		}
		printf("%s", s);

	}
	getch();
	return 0;
}