#include<iostream>
using namespace std;
class polar
{
	static int count;
	int x,y;
public:
	polar(int a,int b)
	{
		count++;
		x = a;
		y = b;
	}
	int active()
	{
		return count;
}
};
int polar::count = 0;
int main()
{
	polar p(2, 3);
	polar p1(2, 4);
	polar p2(2, 5);
	polar p3(3, 3);
	cout << p3.active();
	getchar();
	return 0;
}