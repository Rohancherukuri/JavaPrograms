// Using stl in c++
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,value;
	cout<<"Enter the size of an vector: ";
	cin>>n;
	vector<int> v;
	cout<<"Enter the elements into a vector: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		v.push_back(value);
	}
	v.push_back(6);
	v.push_back(7);
	cout<<"The elements in vector are: "<<endl;
	for(auto x:v)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}
