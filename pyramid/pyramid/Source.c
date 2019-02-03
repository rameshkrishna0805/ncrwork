#include<stdio.h>
int main()
{
	int j, n = 5;
	for (int k = 1; k <=5; k++)
	{
		for (j = 1; j <= n; j++)
		{
			printf(" ");
		}
		for (int i = 1; i<= k; i++)
		{
			printf("%d",i);
		}
		for (int j =5-n; j >0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
		n--;
	}

	getchar();
	
	return 0;
}