// Implementing a Circular Queue using array representation
#include<iostream>
using namespace std;
class CircularQueue
{
	private:
	int *c,front,rear,size,len;

	public:
	CircularQueue(int q)
	{
		size=q;
		front=0;
		rear=0;
		len=0;
		c=new int[size];
	}
	~CircularQueue()
	{
		delete []c;
	}
	bool isEmpty();
	bool isFull();
	void Enqueue(int x);
	void Dequeue();
	void FrontMost();
	void RearMost();
	void Display();
};
bool CircularQueue::isEmpty()
{
	if(front==rear)
		return true;
	else
		return false;
}
bool CircularQueue::isFull()
{
	if((rear+1)%size==front)
		return true;
	else
		return false;
}
void CircularQueue::Enqueue(int x)
{
	if(isFull())
		cout<<"Queue is full!"<<endl;
	else
	{
		rear=(rear+1)%size;
		c[rear]=x;
		len++;
	}

}
void CircularQueue::Dequeue()
{
	int x;
	if(isEmpty())
		cout<<"Queue is empty!"<<endl;
	else
	{
		front=(front+1)%size;
		x=c[front];
		cout<<"The deleted element from the Queue is: "<<x<<endl;
		len--;
	}
}
void CircularQueue::FrontMost()
{
	cout<<"The front most element in Queue is: "<<c[front+1]<<endl;
}
void CircularQueue::RearMost()
{
	cout<<"The rear most element in Queue is: "<<c[rear]<<endl;
}
void CircularQueue::Display()
{
	if(isEmpty())
		cout<<"Queue is empty!"<<endl;
	else
	{
		for(int i=front+1;i<=rear;i++)
		{
			cout<<c[i]<<" "<<endl;
		}
	}
}
int main()
{
	int n,ch,val;
	cout<<"Enter the size of the Circular Queue: ";
	cin>>n;
	CircularQueue cq(n+1);
	cout<<"--------[CircularQueue-Menu]--------"<<endl;
	cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.FrontMost"<<endl;
	cout<<"4.RearMost"<<endl;
	cout<<"5.Display"<<endl;
	cout<<"6.Exit"<<endl;
	cout<<"------------------------------------"<<endl;
	do
	{
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"Enter the element to be enqueueed: ";
			cin>>val;
			cq.Enqueue(val);
			break;

			case 2:
			cq.Dequeue();
			break;

			case 3:
			cq.FrontMost();
			break;

			case 4:
			cq.RearMost();
			break;

			case 5:
			cq.Display();
			break;

			case 6:
			cout<<"Exitting from the program!"<<endl;
			break;

			default:
			cout<<"Invalid Choice!"<<endl;
			cout<<"Please type again!"<<endl;
			break;
		}
	}while(ch!=6);
	
	return 0;
}
