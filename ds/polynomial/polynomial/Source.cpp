#include<iostream>
using namespace std;
struct poly
{
	int coef;
	int data;
	struct poly *next;
};
class polynomial
{
	struct poly *p;
public:
	polynomial()
	{
		p = NULL;
	}
	void create(int x, int co)
	{
		struct poly *temp,*q;
		temp = new poly();
		temp->data = x;
		temp->coef = co;
		temp->next = NULL;
		if (p == NULL)
		{
			p = temp;
		}
		else
		{
			q = p;
			while (q->next!= NULL)
			{
				q = q ->next;
			}
			q->next = temp;
		}
		
	}
	void disp()
	{
		struct poly *q;
		q = p;
		if (p == NULL)
		{
			cout << "list is empty";
		}
		else
		{
			while (q!= NULL)
			{
				cout << q->data << "^"<<q->coef<<" + ";
				q = q->next;
			}
			cout << "\n";
		}
	}
	friend void add(polynomial &p1, polynomial &p2);
};
void add(polynomial &p1, polynomial &p2)
{
	while (p1.p != NULL&&p2.p != NULL)
	{
		if (p1.p->coef == p2.p->coef)
		{
			cout << ((p1.p->data) + (p2.p->data)) << "^" << p1.p->coef << " + ";
			p1.p = p1.p->next;
			p2.p = p2.p->next;
		}
		else if (p1.p->coef > p2.p->coef)
		{
			while (p1.p->coef > p2.p->coef)
			{
				cout << ((p1.p->data)) << "^" << p1.p->coef << " + ";
				p1.p = p1.p->next;
			}
		}
		else if (p1.p->coef < p2.p->coef)
		{
			while (p1.p->coef > p2.p->coef)
			{
				cout << ((p2.p->data)) << "^" << p2.p->coef << " + ";
				p2.p = p2.p->next;
			}
			
		}
	}
}
int main()
{
	polynomial p1, p2;
	p1.create(4, 3);
	p1.create(1, 2);
	p1.create(2, 1);
	p1.create(3, 0);
	p1.disp();
	p2.create(1, 2);
//p2.create(2, 1);
	p2.create(3, 0);
	p2.disp();
	add(p1, p2);
	system("pause");
	return 0;
}