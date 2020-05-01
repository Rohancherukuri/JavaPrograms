// Inheritance in C++
#include<iostream>
using namespace std;
class Parent
{
	protected:
	int x=10;
	void Show()
	{
		cout<<x<<endl;
	}
};
 class Child : protected Parent
{
	protected:
	int y=20;
	void Display()
	{
		cout<<x<<"\n"<<y<<endl;
	}
};
int main()
{
	Child c;
	c.Display();
	return 0;
}
