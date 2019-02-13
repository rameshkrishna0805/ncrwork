#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fopen_s(&fp, "a.txt", "r");
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		if(ch!=EOF)
		printf("%c", ch);
	}
	getch();
	return 0;

}