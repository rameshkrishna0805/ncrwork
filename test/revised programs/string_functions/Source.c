#include<stdio.h>
#include<stdlib.h>
char* strcpy(char *p, char *s)//function for copying content of one string to another 
{
	int i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return s;
}
void strcat(char *t, char *s)//function for concatenation of two strings
{
	t = t + strlen(t);
	while (*s != NULL)
	{
		*t = *s;
		t++;
		s++;

	}
	*t = '\0';
}
char * strrev(char *s)//function for reversing a string
{
	int i = 0, len = 0, j = 0;
	char t, *e;
	e = s;
	while (s[i] != '\0')
	{
		len++;
		e++;
		i++;
	}
	e--;
	for (i = 0; i < len / 2; i++)
	{
		t = *s;
		*s = *e;
		*e = t;
		e--;
		s++;
	}
	return s;
}
int strcmp(char *s, char *p)//function for comparing two strings
{
	int i = 0;
	while (s[i] == p[i])
	{
		if (s[i] == '\0')
			return 0;
		++i;

	}
	return s[i] - p[i];
}
void main()
{
	char *r, concat[25], comp[25];
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	printf("Enter the str1 string length\n");
	scanf("%d", &len1);
	printf("\n Enter the str2 string length\n");
	scanf("%d", &len2);
	char *str1 = (char *)malloc(sizeof(char) *len1);
	char *str2 = (char *)malloc(sizeof(char) * len2);
	if (str1 == NULL || str2 == NULL)
	{
		printf("PROGRAM TERMINATED AS MEMORY NOT ASSIGNED\n");
		return -1;
	}
	else
	{
		printf("enter the str1 string\n");
		scanf("%s", str1);
		printf("Enter the str2  string\n");
		scanf("%s", str2);
		printf("-------------");
		printf("\ncopying contents from %s onto %s\n", str1, str2);
		printf("str1 and str2 are %s and %s \n", str1, str2);
		strcpy(str1, str2);//s is being copied into p
		printf(" Copied done%s\n", str1);
		printf("-------------");
		printf("\nreversing function\n");
		printf("Before reversing %s\n", str1);
		strrev(str1);
		printf("\nafter reversing%s\n", str1);
		printf("-------------");
		printf("concatenation operation\n\n");
		printf("Enter a destination string\n");
		scanf("%s", concat);
		strcat(concat, str1);
		printf("concatenated val %s\n", concat);
		printf("-------------");
		printf("\n\n String comparision function check\n\n");
		printf("\nEnter a string to be compared %s", str1);
		scanf("%s", comp);
		i = strcmp(str1, comp);
		if (i == 0)
			printf("%s and %s are equal\n", str1, comp);
		else
			printf("%s and %s are not equal\n", str1, comp);
	}
	getch();

}