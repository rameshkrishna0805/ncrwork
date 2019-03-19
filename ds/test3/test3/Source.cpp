#include<iostream>
#include<stdlib.h>
using namespace std;
class mystream
{
	char *name;
	int len;
public:
	
	mystream()
	{
		cout << "in no org constructor\n";
		cout << "name set to default \n";
		len = 4;
		name = "ram";
		cout << "name is "<<name;
		cout << "\n";
	}
	mystream(int leng)
	{
		cout << "in para constructor ----->>\n";
		len = leng;
		name = new char[len];
		cout << "enter the name";
		cin >> name;
		cout << "name is "<<name<<"\n";
	}
	mystream(mystream &mys)
	{
		cout << "in copy constructor----->> ";
		this->len = mys.len;
		name = new char[len];
		name = mys.name;
		cout <<"\n"<<"name is"<<name;
	}
	~mystream()
	{
		cout << "destructor called";
	}
	void operator +(mystream my)
	{
		cout <<"concated string is"<<this->name << my.name;
	}
	void operator <(mystream my)
	{
		if (this->len < my.len)
		{
			cout << "true";
		//	return 1;
		}
		else
		{
			cout << "false";
			//return 0;
		}
	}
	void operator =(mystream &my)
	{
		this->len = my.len;
		this->name = my.name;
		cout << "name is " << name;
	}
	friend istream& operator >> (istream& cin, mystream &mmm);
	friend ostream& operator << (ostream& cin, mystream &mmm);
	friend void samp(mystream m[], int no);
};
istream& operator >> (istream& cin, mystream &mmm)
{

	cout << "enter the len\n";
	cin >>mmm.len;
	mmm.name = new char[mmm.len];
	cout << "enter the name";
	cin >>mmm.name;
	return(cin);

}
ostream& operator << (ostream& cin, mystream &mmm)
{

	
	cout << "\nname is " <<mmm.name << "\n";
	return(cout);
}
void samp(mystream m[], int no)
{
	int i = 0, no1 = no;
	for (i=0;no>0; i++)
	{
		for (int j = i + 1; j <no; j++)
		{
			if (strcmp(m[i].name,m[j].name)>0)
			{
				char *temp = m[i].name;
				m[i].name = m[j].name;
				m[j].name = temp;
			}
		}
		no--;
	}
	cout << "names in ascending order according to len are";
	for (int i = 0; i < no1; i++)
	{
		cout << m[i].name<<" ";
	}
}
void main()
{
	mystream my;
	int n;
	cout << "ente the size of string\n";
	cin >> n;
	mystream my1(n);
	cout << "ente the size of string\n";
	cin >> n;
	mystream my3(n);
	cout << "ente the size of string\n";
	cin >> n;
	mystream my4(n);
	cout << "ente the size of string\n";
	cin >> n;
	mystream my5(n);
	mystream m[4] = { my1,my3,my4,my5 };
	samp(m, 4);
	mystream my2(my1);
	my + my1;
	my < my1;
	my = my1;
	mystream my6;
	cin >> my6;
	cout<< my6;
	system("pause");
}