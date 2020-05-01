#include<iostream>
using namespace std;
int main()
{
	int A[]={2,4,6,8,10};
	int *p=&A[1];
	int *q=&A[3];
	cout<<"The distance between two pointers is: "<<endl;
	cout<<p-q<<" "<<endl;
	return 0;
}
