#include<stdio.h>
#include<string.h>
void deletes(char *s1, char *s2)
{
	int l1, l2, i, j, k;
	l1 = strlen(s1);
	l2 = strlen(s2);
	int flag = 0;
	for (i = 0; i<l1; i++)
	{
		//flag = 0;
		for (j = 0; j<l2; j++)
		{
			if (s1[i] == s2[j])
			{
		//		flag = 1;
				for (k = i; k<l1; k++)
			{
					s1[k] = s1[k + 1];
				}
				
		}
		}
		/*if (flag == 1)
		{
			break;
		}*/
	}
}
int main()
{
	char s1[100], s2[100];
	printf("enter string 1 : ");
	gets(s1);
	printf("\nenter string 2 : ");
	gets(s2);
	deletes(s1, s2);
	printf("\nmodified string : %s", s1);
	getch();
	return 0;
}