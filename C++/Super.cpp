// Inheritance in C++
#include<iostream>
using namespace std;
class Super
{
	public:
	int i=30; 
};
class Sub : public Super
{
	public:
	int j=40;
};
int main()
{
	Sub s;
	cout<<"The i in Super class is: "<<s.i<<endl;
	cout<<"The j in Sub class is: "<<s.j<<endl;
	return 0;
}

