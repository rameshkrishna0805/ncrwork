#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100
int main()
{
	int len;//len means string length
	int flag = 0;//variable to check for valid input
	while (1)//checking for positive length
	{
		printf("enter the length of the string:\n");
		scanf_s("%d", &len);
		if (len >= 0)
		{
			break;
		}
	}
	char *str;//string that holds the input
	char str2[size];//result array
	int len2=0;//the resukt array size
	str = (char *)malloc(sizeof(char)*len);//dynamic memory alloaction
	printf("\nEnter the stiring\n");
	scanf("%s", str);
	if (str[0] == '-' || str[len - 1] == '-')
	{
		flag = 1;
		printf("flag=1 set at str1");
	}
	printf("entered string is %s\n", str);
	for (int i = 0; i < len && (flag == 0); i++)
	{
		if (str[i] == '-')
		{
			// printf("\n encountered --");
			if (isdigit(str[i - 1]))
			{
				//printf("\nbefore is a digit\n");
				if (isdigit(str[i + 1]))
				{
					// printf("after is aslo a digit");
					int str1 = (int)str[i - 1];
					int sec = (int)str[i + 1];
					//  printf(" firts is %dand secong is %d\n", str1, sec);
					for (int j = str1 + 1; j < sec; j++)
					{
						str2[len2] = (char)j;
						len2++;
						//printf("%c", j);
					}
				}
				else
				{
					flag = 1;
				//	printf("flag=1 set at %d", i);
					break;
				}
			}
			if (isalpha(str[i - 1]))
			{
				if (isalpha(str[i + 1]))
				{
					//expand chartecters code goes here
					int str1 = (int)str[i - 1];
					int sec = (int)str[i + 1];
					//printf(" firts is %cand secong is %c\n", str1, sec);
					for (int j = str1 + 1; j < sec; j++)
					{
						str2[len2] = (char)j;
						len2++;
						//printf("%c", j);
					}
				}
				else
				{
					flag = 1;
				//	printf("flag=1 set at str1 %d", i);
					break;
				}
			}
		}
		else//(str[i]!='-')
		{
			// printf("entered else for not equal to   ----");
			//printf("hello");
			//printf("%c", str[i]);
			str2[len2] = str[i];
			len2++;
		}
	}
	str2[len2] = '\0';
	if (flag == 1)
	{
		printf("invalid input");
	}
	else
	{
		printf("valid input");
		printf("\nthe resultant string is\n %s", str2);
	}
	system("pause");
	return 0;
}