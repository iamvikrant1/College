#include<iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
};

						//print the linked list function
void printlist(node *n)
{
	while(n !=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{						//assigned nodes
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
						//make it to heap , random allocated
	head=new node();
	second=new node();
	third=new node();
						//made head node and next->
	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;
						//linked list is ready
	printlist(head);

	return 0;

}
