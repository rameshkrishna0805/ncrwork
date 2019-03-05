#include<iostream>
using namespace std;
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node *root = NULL;
struct node *parent, *current;
void insert(int ele) {
	struct node * temp = (struct node*)malloc(sizeof(node));
	temp->right = NULL;
	temp->left = NULL;
	temp->data = ele;
	if (root == NULL) {
		root = temp;
	}
	else
	{
		current = root;
		while (current) {
			parent = current;
			if ((temp->data) > current->data) {
				current = current->right;
			}
			else if (temp->data < current->data) {
				current = current->left;
			}

		}
		if ((temp->data) > parent->data) {
			parent->right = temp;
			}
		else if((temp->data) < parent->data) {
			parent->left = temp;
		}



	}
}
void display(struct node* temp) {
	if (temp == NULL) {
		return ;
	}
	else {
		display(temp->left);
		cout << temp->data <<" ";
		display(temp->right);
	}
	return;

}
void deleted(int element) {
	struct node*temp = root;
	struct node* parent = root;
	while (temp!=NULL && temp->data != element) {
		parent = temp;
		if (element > temp->data) {
			temp = temp->right;
		}
		else if (temp->data > element) {
			temp = temp->left;
		}
	}
	if (temp == NULL) {

		cout << "Element not found" <<endl;
		return;
	}
	else if (temp->right == NULL && temp->left == NULL) {
		if (parent->left == temp) {
			parent->left = NULL;
		}
		else if (parent->right == temp) {
			parent->right = NULL;
		}
	}
	else if (temp->right != NULL && temp->left == NULL || temp->right == NULL && temp->left != NULL) {
		if (parent->right == temp ) {
			if (temp->right != NULL) {
				parent->right = temp->right; 
			}
			else if (temp->left != NULL) {
				parent->right = temp->left;
			}
		}
		else if (parent->left == temp ) {
			if (temp->right != NULL) {
				parent->left = temp->right;
			}
			else if (temp->left != NULL) {
				parent->left = temp->left;
			}
			
		}
	
	
	}
	else if (temp->right != NULL && temp->left != NULL || temp->right != NULL && temp->left != NULL) {
		struct node*t = temp;
		struct node*p = temp, *t1 = temp;
		int min = 1000;
		t = t->right;
		while (t) {
			p = t1;
			if (t->data < min) {
				min = t->data;
			}
			t1 = t;
			t = t->left;
		}
		if (p->left == t1) {
			p->left = t1->right;
		}
		else if (p->right == t1) {
			p->right = t1->right;
		}
		t1->right = temp->right;
		t1->left = temp->left;
		if (parent->left == temp) {
			parent->left = t1;
		}
		else if(parent->right ==temp) {
			parent->right = t1;
		}
		else if(parent == temp){
			root = t1;
			free(temp);
		}
	}


}
int main() {
	
	int choice = 0;;
	
	int element;
	while (choice!=5) {
		cout << "1.Insert 2. Delete 3.Display 4.Exit " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter the element " << endl;
			cin >> element;
			insert(element);
			break;
		case 2:
			cout << "Delete node element" << endl;
			cin >> element;
			deleted(element);
			break;

		case 3:
			cout << "BST " << endl;
			display(root);
			break;
		case 4:
			choice = 5;
			break;
		}
	}

}
