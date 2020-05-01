// Using AccessSpecifiers
#include<iostream>
using namespace std;
class Hyper
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	void Hset()
	{
		a=10;
		b=20;
		c=30;
	}
};
class Super: public Hyper
{
	public:
	void set()
	{
		cout<<a=10<<endl;
		cout<<b=20<<endl;
		cout<<c=30<<endl;
	}
};
int main()
{
	Super s;
	//cout<<s.a=100<<endl;
	//cout<<s.b=200<<endl;
	s.set();
	return 0;
}

