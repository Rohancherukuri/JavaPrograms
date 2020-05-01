// Concept of inheritance in c++
#include<iostream>
using namespace std;
class Base
{
	public:
	int x;
	void Show()
	{
		cout<<x<<endl;
	}
};
class Derived : public Base
{
	public:
	int y;
	void Display()
	{
		cout<<x<<"\n"<<y<<endl;
	}
};
int main()
{
	Base b;
	b.x=10;
	b.Show();
	Derived d;
	d.x=30;
	d.y=20;
	d.Display();
	return 0;
}

