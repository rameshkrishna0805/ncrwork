#include<iostream>
#define MAX_SIZE 10
using namespace std;
struct _queue {
	int front;
	int rear;
	int *s;
	int size;
};
class queue
{
	struct _queue a;
public:
	queue();
	void enqueue(int);
	int dequeue();
	void getsize(int);
	bool IsEmpty();
	bool IsFull();
	void display();
	~queue();
};

queue::queue()

{

	a.front = -1;

	a.rear = -1;

	a.s = NULL;

	a.size = 0;
}

void queue::getsize(int n)
{

	a.size = n;

	a.s = new int[n];

}

bool queue::IsFull()
{

	return (a.rear == a.size - 1);

}

bool queue::IsEmpty()
{

	if (a.front>a.rear)

	{

		return true;

	}

	else

	{

		return false;

	}

}

void queue::enqueue(int ele)
{
	if (a.rear==-1)
	{
		a.rear = 0;
		a.front = 0;
		a.s[a.rear] = ele;
	}
	else if (!IsFull())
	{
		a.s[++a.rear] = ele;
	}
	else
	{
		cout << "overflow" << endl;
	}

}
int queue::dequeue()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = a.s[a.front++];
	}
	else

	{

		cout << "underflow" << endl;

	}

	return x;

}

void queue::display()

{

	for (int i = a.front; i <= a.rear; i++)

	{

		cout << a.s[i] << endl;

	}

}

queue::~queue()

{

}

int main()

{

	queue q;

	q.getsize(4);

	q.enqueue(1);

	q.enqueue(2);

	q.enqueue(3);

	q.enqueue(4);
	cout << "before";
	q.display();

	q.dequeue();

	q.dequeue();
	cout << "after";

	q.display();

	getchar();

	return 0;

}