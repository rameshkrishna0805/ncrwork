#include<iostream>
using namespace std;
class arithmetic
{
public:
	arithmetic()
	{
	}
	inline int add(int a,int b)
	{
		return  (a+ b);
    }
	inline int sub(int a, int b)
	{
		return  (a - b);
	}
	inline int mul(int a, int b)
	{
		return  (a * b);
	}
	inline int div(int a, int b)
	{
		return  (a / b);
	}
	inline int modul(int a, int b)
	{
		return  (a % b);
	}
};
int main()
{
	//int 
	arithmetic ar;
	cout<<"addition:"<<ar.add(2+1,3+1)<<endl;
	cout << "subtraction:" << ar.sub(2 + 1, 3 + 1)<<endl;
	cout << "multiplication:" << ar.mul(2 + 1, 3 + 1)<<endl;
	cout << "division:" << ar.div(2 + 1, 3 + 1)<<endl;
	cout << "modulus:" << ar.modul(12 + 1, 3 + 1);
	getchar();
	return 0;
}