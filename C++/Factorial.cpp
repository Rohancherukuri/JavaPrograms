// Implementing counting og trailing zreos in a given a factorial
#include<iostream>
using namespace std;
long fact(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int x,n,count;
	cout<<"Enter a number: ";
	cin>>x;
	fact(x);
	cout<<"The factorial of number  "<<x<<" is: "<<fact(x)<<endl;
        if(fact(x)%10!=0)
		cout<<"The factorial "<<fact(x)<<" has no trialing zeros"<<endl;	else
	{
		n=x/5;
		count=n;
		cout<<"The factorial "<<fact(x)<<" has "<<count<<" trailing zeros"<<endl;
	}
	return 0;
}
