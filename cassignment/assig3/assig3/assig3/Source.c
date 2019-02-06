#include<stdio.h>
#include<math.h>
int main()
{
	int n,m=0;
scanf_s("%d",&n);
scanf_s("%d", &m);
	int a[10];
	for (int i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	int sum = 0,i=0,j,flag=0;
	for (i = 0;i < n;i++)
	{
		sum = 0;
		for (j = i;j < n;j++)
		{
			sum = sum + a[j];
			if (sum > m)
			{
				continue;
			}
			if (sum == m)
			{
				printf(" subarray found between %d and %d", i, j);
				flag = 1;
			}
			////
		}
		
	}
	if (flag != 1)
	{
		printf(" no subarray found");
	}

	
	getch();
	return 0;
}