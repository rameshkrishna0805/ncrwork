#include<stdio.h>
#include<string.h>
int rep(char *);
int main()
{
	char cat[12] = "the cat sat";
	int n=rep(cat);
	printf("%d", n);
	printf("%s", cat);
	getch();
	return 0;
}
int rep(char *s)
{
	int i, count = 0;;
	for (i = 0;s[i]!='\0';i++)
	{
		if (s[i] ==' ')
		{
			s[i] = '-';
			count++;
		}
	}
	return count;
}