#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a; cout << "Enter int" << endl; cin >> a;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Input...Enter Again !!" << endl;
			cin >> a;
		}
		if (!cin.fail())
			break;
	}
	cout << "Entered int is: " << a << endl;
	system("pause");
}