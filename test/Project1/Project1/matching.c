#include<stdio.h>
int matching()
{
	FILE *fp1 = NULL;
	fopen_s(&fp1, "so.txt", "w");
	FILE *fp = NULL;
	fopen_s(&fp, "samp.txt", "r");
	char ch,ch1;
	char w[10]="ac";
	int i = 0;
	int pos = 0;
	//printf("enter  word");
	//scanf_s("%s",10,&w);
	while (!feof(fp))
	{
		ch = fgetc(fp);
		
		pos = ftell(fp);
		while (ch == w[i])
		{
			ch = fgetc(fp);
			i++;
		}
		if (i ==2)
		{
			ch1 = w[0];
			int l = 0;
			//r[3] = w[0];
			for (int k = 1;k < 2;k++)
			{
				fputc(w[k], fp1);
			}
			fputc(w[0], fp1);
			//i = 0;
		}
		else
		{
			i =0;
			fseek(fp, pos, SEEK_SET);
		}
		if (ch != EOF)
			fputc(ch, fp1);
	}
	return 0;
}