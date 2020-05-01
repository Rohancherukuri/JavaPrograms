// Implementing function overriding in c++
#include<iostream>
using namespace std;
class Super
{
	public:
	void show()
	{
		int x=10;
		cout<<"The value of x is: "<<x<<endl;
	}
};
class Sub:public Super
{
	public:
	void show()
	{
		int x=20;
		cout<<"The value of x is: "<<x<<endl;
	}
};
int main()
{
	Super s;
	s.show();
	Sub ss;
	ss.show();
	Super *p;
	p=new Sub();
	p->show();

	return 0;
}
