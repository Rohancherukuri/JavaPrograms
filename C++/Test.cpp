// Implementing static variable and functins
#include<iostream>
using namespace std;
class Test
{
	public:
	int a,b;
	public:
	static int count;
	Test()
	{
		a=10;
		b=10;
		count++;
	}
	static int getCount()
	{
		return count;
	}
};
int Test::count=0;
int main()
{
	Test t1;
	Test t2;
	t1.count=25;
	cout<<t1.a<<" "<<t1.b<<endl;
	cout<<t2.a<<" "<<t2.b<<endl;
	cout<<Test::getCount()<<" "<<Test::count<<" "<<endl;

	return 0;
}	
