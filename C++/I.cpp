// Implementing super class pointer assinging a sub class object
#include<iostream>
using namespace std;
class Super
{
	public:
	void fun1()
	{
		cout<<"Inside fun1"<<endl;
	}
	void fun2()
	{
		cout<<"Inside fun2"<<endl;
	}
	void fun3()
	{
		cout<<"Inside fun3"<<endl;
	}
};
class Sub:public Super
{
	public:
	void fun4()
	{
		cout<<"Inside fun4"<<endl;
	}
	void fun5()
	{
		cout<<"Inside fun5"<<endl;
	}
	void fun6()
	{
		cout<<"Inside fun6"<<endl;
	}
};
int main()
{
	Super *s;
	Sub ss;
	s=new Sub();
	s->fun1();
	s->fun2();
	s->fun3();
	cout<<"-----------"<<endl;
	ss.fun1();
	ss.fun2();
	ss.fun3();
	ss.fun4();
	ss.fun5();
	ss.fun6();

	return 0;
}
