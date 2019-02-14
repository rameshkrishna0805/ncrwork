//1 feet in mts   :::0.3048
//i inch in cm is :: 2.54
#include<iostream>
using namespace std;
class dist2;
class dist1
{
	int m, cm;
public:
	dist1(int m1,int cm1)
	{
		m = m1;
	    cm = cm1;
	}
	friend void add(dist1 d,dist2 d2);
};
class dist2
{
	int f, in;
public:
	dist2(int m1, int cm1)
	{
		f = m1;
		in = cm1;//
	}
	friend void add(dist1 d,dist2 d2);
};
void add(dist1 d,dist2 d2)
{
	cout << "addition  resuilt in cm is" << (d.cm)+(d.m*100)+((d2.in)*2.54)+(d2.f)*30.48;
}
int main()
{
	dist1 d(2, 3);
	dist2 d1(2, 3);
	
	add(d, d1);
	getchar();
	return 0;
}