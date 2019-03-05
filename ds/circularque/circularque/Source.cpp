#include<iostream>
using namespace std;
class cirque
{
	int front;
	int rear;
	int size;
	int *a;
public:
	cirque(int s)
	{
		front = -1;
		rear = -1;
		size = s;
		a = new int[s];

	}
	bool full()
	{
		return (rear==front-1||rear+front==size-1);
	}
	void create(int ele)
	{
		if (rear == -1)
		{
			front = 0;
			rear = 0;
			a[rear] = ele;
		}
		else if (!full())
		{
			rear = (rear + 1) % size;
			a[rear] = ele;
		}
		else
		{
			cout << "que is full";
		}

	}
	bool empty()
	{
		return (rear == -1);
	}
	void pop()
	{
		if (rear == front)
		{
			rear = -1;
			front = -1;
		}
		else if (!empty())
		{
			front=(front+1)%size;
		}
		
	}
};
int main()
{
	system("pause");
	return 0;
}
