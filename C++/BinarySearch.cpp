#include<iostream>
using namespace std;
int main()
{
	int A[10]={2,4,6,8,10,12,14,16,18,20};
	int l=0,mid,h=9,key;
	cout<<"Enetr the key element to be searched: ";
	cin>>key;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid]){
			cout<<"Key element "<<key<<" is found at "<<mid<<" position"<<endl;
			return 0;
		}
		else if(key<A[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	cout<<"Key element not found in the Array"<<endl;
	return 0;
}

