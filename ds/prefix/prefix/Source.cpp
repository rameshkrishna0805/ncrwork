#include<iostream>
using namespace std;
struct stack1 {
	int size;
	char *s;
	int top;
};
class stack2
{
	stack1 stk;
public:
	stack2()
	{
		stk.size = 0;
		stk.s = NULL;
		stk.top = -1;
	}

	void getsize(int n)
	{
		stk.size = n;
		stk.s = new char[n];
	}
	void push(char ele)
	{
		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()

	{
		//cout << stk.size << endl;
	//	cout << stk.top;
		return(stk.top == (stk.size - 1));
	}

	char pop()
	{
		if (!Isempty())
			return(stk.s[stk.top--]);
		else
			cout << "Underflow";
	}
	bool Isempty()
	{
		return (stk.top == -1);
	}
	char peek()

	{
		return(stk.s[stk.top]);

	}
	void display()
	{

		for (int i = 0; i <= stk.top; i++)
			cout << stk.s[i] << endl;
	}
};
void main()
{
	stack2 st;
	st.getsize(10);
	char a[20];
	cout << "enter string"<<endl;
	cin >> a;
	cout << "post fix expm is:" << a;
	for (int i = 0; i <strlen(a); i++)
	{
		if (a[i]>=48&&a[i]<=57)
		{
			st.push(a[i]);
			cout << "ele is :"; 
			st.display();
		}
		else
		{
			if (a[i] == '+')
			{
				st.push(((int)st.pop()) + ((int)st.pop()) - '0');
			}
			else if (a[i] == '-')
			{
				char ch = ((st.pop() - '0') - ((st.pop() - '0'))) + '0';
			//	cout << ch;
				st.push(ch);
			}
			else if (a[i] == '*')
			{
				char ch= ((st.pop()-'0') * ((st.pop()-'0'))) + '0';
			//	cout << ch;
				st.push(ch);
			}
			else if (a[i] == '/')
			{
				char ch = ((st.pop() - '0') / ((st.pop() - '0'))) + '0';
			//	cout << ch;
				st.push(ch);
			}
		}
	}
	//st.push('\0');
	cout << "post fix expression after evaluation is:";st.display();
	system("pause");
}