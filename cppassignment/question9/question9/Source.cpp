#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	 register int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap(int a, int b)
{
	 register int t;
	t = a;
	a = b;
	b = t;
}
void main()
{
	 register int a, b, ch;
	cout << "Enter the digits\n";
	cin >> a >> b;
	cout << "Enter the choicce\n";
	cin >> ch;
	switch (ch)
	{
	case 1:swap(&a, &b);
		cout << "After the swapping" << a <<"   "<< b;
		break;
	case 2:swap(a, b);
		cout << "After the swapping" << a << b;
		break;
	default:
		break;
	}
	system("pause");
	getchar();
}