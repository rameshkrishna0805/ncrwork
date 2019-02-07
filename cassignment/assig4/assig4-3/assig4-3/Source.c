#include<stdio.h>
int main()
{
	int count = 0;
	char *s[] = { "we will teach you how to","move a mountain","level a building","erase the past","make a million" };
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < (strlen(s[i]) - 1);j++)
		{
			if (s[i][j] == 'e')
				count++;
		}
	}
	printf("%d", count);
	getch();
	//
	return 0;//
}