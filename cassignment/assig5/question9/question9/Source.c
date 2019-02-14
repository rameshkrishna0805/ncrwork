#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp = NULL;
	fopen_s(&fp, "samp.txt", "r");
	FILE *fp1 = NULL;
	fopen_s(&fp1, "sa.txt", "w");
	while (!feof)
	{
		char *a;
		int i = 0;
		fgets(a,10, fp);
		while (a[i] != '\n')
		{
			i++;
			fputc((a[i]+32), fp1);
		}
	}
	getch();
	return 0;
}