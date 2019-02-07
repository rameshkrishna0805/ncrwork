#include<stdio.h>
void rev(char *a);
int main()
{
	char s[10];
	gets(s);
	rev(s);
	getch();
	return 0;
}
void rev(char *a)
{
	if (*(a) == '\0')
	{
		return;
	}
	rev(a + 1);
	printf("%c",*a);
}