#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class __list__
{
	struct node *start;
public:
	__list__();
	void Insert_First(int);
	void Insert_Last(int);
	void Insert_After(int, int);
	void Insert_Before(int sel, int ele);
	int Delete_First();
	int Delete_Last();
	void Delete_Spec(int);
	void Travel_Forward();
	void Travel_Backward();
	void Reverse();
	~__list__();
};
__list__::__list__()
{
	start = NULL;
}
void __list__::Insert_First(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = start;
	start = temp;
}
void __list__::Insert_Last(int ele)
{
	struct node *temp, *p = NULL;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	if (start == NULL)
		start = temp;
	else
		start = temp;
	while (p->next != NULL)
		p = p->next;
	p->next = temp;
}
void __list__::Insert_After(int sel, int ele)
{
	if (start != NULL)
	{
		struct node *p;
		p = start;
		while (p != NULL && p->data != sel)
			p = p->next;
		if (p != NULL)
		{
			struct node *temp;
			temp = new node;
			temp->data = ele;
			temp->next = p->next;
			p->next = temp;
		}
		else
			cout << "Element not found";
	}
	else
		cout << "List is Empty";
}
/*
void __list__::Insert_Before(int sel, int ele)
{
}*/
int __list__::Delete_First()
{
	int x = -999;
	if (start != NULL)
	{
		struct node *temp;
		temp = start;
		start = start->next;
		x = temp->data;
		delete temp;
	}
	else
		cout << "List Empty";
	return x;
}
int __list__::Delete_Last()
{
	int x = -999;
	if (start != NULL)
	{
		if (start->next == NULL)
		{
			x = start->data;
			delete start;
			start = NULL;
		}
		else
		{
			struct node *p;
			p = start;
			while (p->next->next != NULL)
				p = p->next;
			x = p->next->data;
			delete p->next;
			p->next = NULL;
		}
	}
	else
		cout << "List is empty";
	return x;
}
void __list__::Delete_Spec(int ele)
{
	struct node *temp, *p;
	if (start != NULL)
	{
		if (start->data = ele)
		{
			temp = start;
			start = temp->next;
			delete temp;
		}
		else
		{
			p = start;
			while (p->next != NULL && p->next->data != ele)
				p = p->next;
			if (p->next != NULL)
			{
				temp = p->next;
				p->next = temp->next;
				delete temp;
			}
			else
				cout << "Element not found";
		}
	}
	else
		cout << "List is Empty";
}


int main()
{
	cout << "eneter the choice 1:insert first  2)insert last 3)insert after 4)del first 5)del last 6) del specific\n";
	int ch;
	cin >> ch;
	while (1)
	{
		switch (ch)
		{
		default:
			break;
		case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			exit(0);
		}
	}
	system("pause");
	return 0;
}