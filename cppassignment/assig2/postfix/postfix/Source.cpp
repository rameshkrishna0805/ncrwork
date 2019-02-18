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
	}//
	 ////
	void push(char ele)
	{

		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()
	{
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
	int preced(char c)
	{
		if (c == '+' || c == '-')
		{
			return 5;
		}
		else if (c == '*' || c == '/')
		{
			return 10;
		}
		else
		{
			return 1;
		}
	}
};
int main()
{
	stack2 st;
	st.getsize(10);
	char a[20];
	char b[20];
	int k = 0;
	cout << "enter the string\n";
	cin >> a;
	for (int i = 0; i < strlen(a); i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z'))
		{
			b[k++] = a[i];
		}
		else
		{
			if (st.Isempty())
			{
				st.push(a[i]);

			}
		else if (a[i] == ')')
		{
			while (st.peek()!= '('&&(!st.Isempty()))
			{
				b[k] = st.pop();
				cout << b[k++]<<" ";
			}
			cout << "stack is"; 
			st.display();
			cout << "           ";
	// cout<<"popped"<<st.pop();
		}
		else 
		{
				while(st.preced(a[i] <= st.preced(st.peek()))&& (!st.Isempty()))
				{
				
					b[k] = st.pop();
					cout<<endl;
					cout << b[k++] << " ";
			    }
				
				st.push(a[i]);
			}
		
		}
	}
	while (!st.Isempty())
	{
			b[k++] = st.pop();
	}
	b[k++] = '\0';
	cout << b;
	system("pause");
	getchar();
	return 0;
}