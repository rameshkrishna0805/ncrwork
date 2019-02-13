#include<stdio.h>
int* count(FILE *fp)//function to count no of aplhabets,digits,spaces,special,charecters
{
	int *a = (int *)malloc(sizeof(int) * 4);
	int alpha = 0, dig = 0, sp = 0, spc = 0;
	/*FILE *fp=NULL;
	fopen_s(&fp,"samp.txt", "r+");*/
	fseek(fp, 0, SEEK_SET);
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if (ch >= 65 && ch < 92 || ch >= 97 && ch < 123)
		{
			alpha++;
		}
		else if (ch >=48 && ch <=57)
		{
			dig++;
		}
		else if (ch == ' ')
		{
			sp++;
		}
		else if(ch=='@'||ch=='$'||ch=='#')
		{
			spc++;
		}
		

	}
	a[0] = alpha;
	a[1] =dig;
	a[2] = sp;
	a[3] = spc;
	//printf("aplhabest=%d,digits=%d,spaces=%d,special cchar=%d",alpha,dig,sp,spc);
	return a;

}