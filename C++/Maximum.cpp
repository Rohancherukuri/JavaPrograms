#include<iostream>
using namespace std;
int main()
{
	int A[10],n,i;
	int *p;
	p=new int[n];
	cout<<"Enter the size of the Array: ";
	cin>>n;
	cout<<"Enter the values of the Array: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int max=p[0];
	for(i=0;i<n;i++)
	{
		if(max<p[i])
			max=p[i];
	 }
	cout<<"The Maximum element in the Array is:"<<max<<endl;
	return 0;
}
