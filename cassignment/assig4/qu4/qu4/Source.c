#include<stdio.h>
#include<string.h>
#include<ctype.h>
int rep(char *);
int main()
{
	char cat1[] = "the cat sat";
	int n = rep(cat1);
	printf("%d\n", n);
	getch();
	return 0;
}
int rep(char *s)
{
	int i, count = 0;;
	printf("%s\n", s);
	for (i = 0;s[i] != '\n';i++)
	{
		if (isspace(s[i])) {
			s[i] = '-';
			count++;
		}
		/*if (*(s+i)==' ')
		{
			*(s+i) = '-';
			count++;
		}*/
	}
	return count;
}