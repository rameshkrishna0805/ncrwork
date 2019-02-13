#include<iostream>
using namespace std;
class complex
{
	int r, i;
public:
	complex()
	{
		cout << "in no arg constructor\n";
	}
	complex(int re)
	{
		r = re;
		i = 0;
	}
	complex(int re, int im)
	{
		r = re;
		i = im;
	}
	friend  void add(complex c,complex c1);
	friend void mul(complex c, complex c1);
};
	void add(complex c,complex c1)
	{
		cout << "addtion of two complex numnbers is" << (c1.r + c.r) << "+i" << (c1.i + c.i);
	}
	void mul(complex c,complex c1)
	{
		cout << "\nmul of two complex numnbers is" << (c1.r*c.r) << "+i" << (c1.i*c.i);
	}
int main()
{
	complex c(1,2);
	complex c1(2, 3);
	add(c1,c);
	mul(c, c1);


	getchar();
	return 0;
}