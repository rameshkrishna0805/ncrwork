#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	char name[20];
	char grade;
	int m1, m2, m3;
	float avg;
public:
	void set(char n[20], int m, int a, int b)
	{
	strcpy_s(name,20,n);
	m1 = m;
	m2 = a;
	m3 = b;
	
	}
	void print()
	{
		cout << "NAME:" << name << " grade:" << grade << " marks of three sub :" << m1 << "  " << m2 << "  " << m3 << endl;
		cout << "grade:" << grade<<endl;
		cout << "average:" << avg << endl;
	}
	void avg1()
	{
		avg =(m1 + m2 + m3) / 3.0f;
	}
	void assign()
	{
		if (avg>60)
		{
			grade = 'A';
		}
		else if(avg>50)
		{
			grade = 'B';
		}
		else if (avg > 40)
		{
			grade = 'C';
		}
		else
		{
			grade = 'F';
		}
	}
	
};
class collegecourse
{
	
public:
	student s;
	collegecourse()
	{

	}
	void setdata(char name[20], int m1, int m2, int m3)
	{
	s.set(name, m1, m2, m3);
	}
	void calavg()
	{
		s.avg1();
	}
	void grad()
	{
		s.assign();
	}
	void pri()
	{
		s.print();
	}
};
int main()
{
	collegecourse c;
	c.setdata("ramesh", 90, 80, 90);
	c.calavg();
	c.grad();
	c.pri();
	getchar();
	return 0;
}