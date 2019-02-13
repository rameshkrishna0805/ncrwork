#include<stdio.h>
int remov(FILE *fp)//function to remove comments
{
	FILE *fp1 = NULL;
	int pos = 0;
	fopen_s(&fp1, "so.txt", "w");
	/*FILE *fp = NULL;
	fopen_s(&fp, "samp.txt", "r");*/
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '/')
		{
			ch = fgetc(fp);
			if (ch == '/')
			{
				while (fgetc(fp) != '\n')
				{

				}
			}

			else if (ch == '*')
			{
				pos = ftell(fp);
				while(fgetc(fp) != '*')
				{

				}
				if (fgetc(fp) == '/')
				{

				}
				else
				{
					fseek(fp, pos, SEEK_SET);
				}
				/*while (fgetc(fp) != '/')
				{
				}*/
			}
		}
		 else
		 { if(ch!=EOF)
	 		fputc(ch, fp1);
	    	}
	}
	return 0;
}