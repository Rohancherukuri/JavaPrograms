// Implementing list in c++ using stl
#include<iostream>
#include<list>
using namespace std;
int main()
{
	int n,value;
	cout<<"Enter the size of list: ";
	cin>>n;
	list<int> l;
	cout<<"Enter the value into the list: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		l.push_back(value);
	}
	cout<<"The elements in the list are: "<<endl;
	for(auto x:l)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}
