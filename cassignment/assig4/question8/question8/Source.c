#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char *s[20];
	int n, i;
	printf("no string ");
	scanf_s("%d", &n);
	printf("\n enter string ");
	for (i = 0; i<n; i++)
	{
		s[i] = (char*)malloc(20 * sizeof(char));
		scanf_s("%s",20,s[i]);
	}
	printf("\n strings are : ");
	for (i = 0; i<n; i++)
	{
		printf("\n %s", s[i]);
	}
	getch();
	return 0;
}