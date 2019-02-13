#include<stdio.h>
struct time
{
	int hr;
	int min;
	int sec;
};
int main()
{
	struct time t = { 2,34,21 };
	printf("%d:%d:%d", t.hr, t.min, t.sec);
	getch();
	return 0;
}