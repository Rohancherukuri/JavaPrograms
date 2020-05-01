#include<iostream>
using namespace std;
int main()
{
	int A[10],n,i,key;
	int *p;
	p=new int[n];
	cout<<"Enter the size of the Array: ";
	cin>>n;
	cout<<"Enter the values into the Array: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"The Array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the Key element: ";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(key==p[i])
		{
			cout<<"The key element "<<key<< " is found at "<<i<<" Position"<<endl;
			return 0 ;
		}
	}
	cout<<"Key not found"<<endl;
}
