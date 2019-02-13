#include<stdio.h>
int* count(FILE *fp);

int main()
{
	int choice;
	int *b;
	
	FILE *fp = NULL;
	fopen_s(&fp, "samp.txt", "r+");
	printf("Enetr choice\n1)count no of alphabets,digits,spacesand specioal char\n2)remove all the comments\n3)find a matching word and rotate\n4)replace all tabs\n5)exit\n");
	scanf_s("%d", &choice);
	while (1)
	{
		if (choice >= 48 && choice <= 57)
		{
			switch (choice)
			{
			case 1:

				b = count(fp);
				printf("alphabets digits spaces,spl char\n");
				for (int i = 0;i < 4;i++)
				{
					printf("  %d  ", b[i]);
				}
				break;
			case 2:
				remov(fp);
				break;
			case 3:
				matching();
				break;
			case 4:
				repl(fp);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choice");
				break;

			}
			printf("Enetr choice\n1)count no of alphabets,digits,spacesand specioal char\n2)remove all the comments\n3)find a matching word and rotate\n4)replace all tabs\n5)exit\n");
			scanf_s("%d", &choice);
		}
		else
		{
			exit(0);
		}
	}
	fclose(fp);
	getch();
	return 0;
}