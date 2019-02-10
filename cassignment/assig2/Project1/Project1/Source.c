#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int fact = 1;
	for (int i = 1;i <= a;i++)
	{
		fact = fact * i;
	}
	printf("%d", fact);
	getch();
	
	return 0;

}