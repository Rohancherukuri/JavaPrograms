// Doubly Linear LinkedList
#include<iostream>
using namespace std;
class List;
class Node
{
	private:
	Node *prev;
	int data;
	Node *next;
	friend List;
}*first=NULL;
class List
{
	public:
	void Create(int[],int);
	int Count(Node *);
	int Sum(Node *);
	void Display(Node *);
};
void List::Create(int A[],int n)
{
	int i;
	Node *t,*last;
	first=new Node;
	first->prev=NULL;
	first->data=A[0];
	first->next=NULL;
	last=first;

	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->prev=first->next;
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
int List::Count(Node *p)
{
	int c=0;
	while(p)
	{
		p=p->next;
		c++;
	}
	return c;
}
int List::Sum(Node *p)
{
	int result=0;
	while(p)
	{
		result=result+p->data;
		p=p->next;
	}
	return result;
}
void List::Display(Node *p)
{
	while(p)
	{
		cout<<p->data<<"<-->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	List l;
	int A[]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	l.Create(A,10);
	cout<<"The number of nodes present in the List is: "<<l.Count(first)<<endl;
	cout<<"The Sum of all elements in the List is: "<<l.Sum(first)<<endl;
	l.Display(first);
	return 0;
}
