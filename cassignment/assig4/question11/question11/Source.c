#include<stdio.h>
int main()
{
	char a[20];
	printf("enter bthe string");
	scanf_s("%s", a, 20);
	char c;
	printf("enter the char");
	scanf_s(" %c", &c);
	printf("\n");
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == c)
		{
			printf("      ");
		}
		else
		{
			printf("%c", a[i]);
		}
	}
	getch();
	return 0;
}