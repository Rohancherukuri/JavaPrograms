#include<iostream>
using namespace std;
int main()
{
	int x;
	int *p;
	cout<<"Enter the value of the x: ";
	cin>>x;
	p=&x;
	cout<<"The Address of the variable x is: "<<p<<endl;
	cout<<"The data at address "<<p<<" is "<<*p<<endl;
	cout<<"The Address of the pointer is "<<&p<<endl;
	return 0;
}
