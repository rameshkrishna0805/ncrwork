#include<stdio.h>
int repl(FILE *fp)//function to replace tabspaces with \t
{
	FILE *fp1 = NULL;
	fopen_s(&fp1, "so.txt", "w");
	/*FILE *fp = NULL;
	fopen_s(&fp, "samp.txt", "r");*/
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch =='\t')
		{
			fputc('\\',fp1);
			fputc('t', fp1);
		}
		else
		{
			if(ch!=EOF)
			fputc(ch, fp1);
		}
	}

	return 0;
}