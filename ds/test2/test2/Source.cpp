#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct list
{
	int data;
	list *next;
};
class linked
{
public:
	linked()
	{
	}
	list *start = NULL;
	void insert(int n,int d)
	{
		list *temp,*p;
		p = new list;
		temp = start;
		if (start == NULL)
		{
			cout << "list is empty";
			if (n == 1)
			{
				p->data = d;
				p->next = NULL;
				start = p;
			}
			else
			{
				cout << "cant find pos";
			}
		}
		else
		{
			int count=0;
			while (temp->next!= NULL&&count<n-1)
			{
				n++;
				temp = temp->next;
			}
			p->data=d;
			p->next = temp->next;
			temp->next = p;
		}
	}
	void rev()
	{
		//pri(start);
		list *temp,*prev=start;
		if(start == NULL)
		{
			cout << "\nlist is empty";
		}
		else
		{

		}
	}
	void forward()
	{
		list *temp;
		temp = start;
		if (temp == NULL)
		{
			cout << "list is empty";
	  }
		else
		{
			cout << "\n lisst is ";
			while (temp!= NULL)
			{
				cout <<temp->data<<"-->";
				temp = temp-> next;
			}
		}
	}
	void pri(list *temp)
	{
		if (temp->next != NULL)
		{
			pri(temp->next);
		}
		cout << temp->data<<" ";
	}
	void backward() {
		pri(start);
	} void del(int val)
	{
		list *temp = start,*prev=start;
		int count = 0;
		if (start == NULL)
		{
			cout << "list is empty\n";
		}
		else
		{
			while (count!=val-1&&temp->next != NULL)
			{
				count++;
				prev = temp;
				temp = temp->next;
			}
			cout << "del pos " << val<<"  with data "<<temp->data<<"\n";
			if (val == 1)
			{
				start = temp->next;
			}
			else
				prev->next = temp->next;
			delete(temp);
		}
		}

};
int main()
{
	linked l;
	int ch;
	while (1)
	{
		cout << "enter choice 1 insert at n -->2rev-->3 forward print-->4rev pri-->5del node at pos-->6exit";
		cin >> ch;
		switch (ch)
		{
		case 1:
			int n, d;
			cout << "enter the pos and data";
			cin >> n >> d;
			l.insert(n, d);
			cout << "\n";
			break;
		case 2:
			l.rev();
			cout << "\n";
			break;
		case 3:
			l.forward();
			cout << "\n";
			break;
		case 4:
			l.backward();
			cout << "\n";
			break;
		case 5:
			int n1;
			cout << "\n entet he pos to  be del";
			cin >> n1;
			l.del(n1);
			cout << "\n";
			break;
		case 6:
			exit(0);
		}

	}
	system("pause");
	return 0;
}