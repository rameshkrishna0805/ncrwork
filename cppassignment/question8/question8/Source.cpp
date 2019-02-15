#include<iostream>
#include<cstring>
using namespace std;
class Employee
{

	char n[30];
	int id;
	float sal;
	int x;
public:


	Employee()
	{
		id = 0;
		sal = 0;
		cout << "Default Constructor called" << endl;
	}
	Employee(char nm[30], int id1, float sal1)
	{
		strcpy_s(n, nm);
		id = id1;
		sal = sal1;
	}
	~Employee()
	{
		cout << "Destructor called";
	}
};
int main()
{
	Employee e; cout << "Size is:" << sizeof(e); 
   Employee d; 
	getchar();
	return 0;

}