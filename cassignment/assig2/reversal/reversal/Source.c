#include <stdio.h>
int main()
{
	int n, reversedNumber = 0, remainder;
	printf("Enter an integer: ");
	scanf_s("%d", &n);
	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}
	printf("Reversed Number = %d", reversedNumber);
	getch();
	return 0;
}