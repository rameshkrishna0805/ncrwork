#include<iostream>
using namespace std;
class student
{
	int rollno;
	int total;
	char grade;
	char name[10];
	int m1, m2,m3;
public:
	friend ostream & operator<<(ostream &cout,student &s);
	friend istream & operator>>(istream &cin, student &s);
	friend void get_results(student[],int l);

};
ostream & operator<<(ostream &cout, student &s)
{
	cout << "roll number" <<s.rollno;
	cout << "name" << s.name;
	cout << "total" << s.m1+s.m2+s.m3;
	cout << "grade" << s.grade;
	return cout;
}
istream & operator>>(istream &cin, student &s)
{
	cout << "roll number";cin>>s.rollno;
	cout << "name";cin>>s.name;
	cout << "marks";cin>>s.m1>>s.m2 >>s.m3;
	cout << "grade";cin>>s.grade;
	return cin;
}
void get_results(student s[],int l)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "roll number" << s[i].rollno;
		cout << "name" << s[i].name;
		cout << "total" << s[i].m1 + s[i].m2 + s[i].m3;
		cout << "grade" << s[i].grade;
	}
}
int main()
{
	student s[3];
	cin >>s[0];
	cin >> s[1];
	cin >> s[2];
	//cin >> s1;
	//cout <<s1;
	get_results(s, 3);
	system("pause");
	getchar();
	return 0;
}
