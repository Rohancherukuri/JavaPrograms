// Converting number system from binary to decimal and vice versa
#include<iostream>
#include<cmath>
using namespace std;
int binary(int n)
{
	int rem,i=0,result=0;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		result=result+rem*pow(2,i);
		++i;
	}
	return  result;
}
int decimal(int n)
{
	int rem,i=0,result=0;
	while(n!=0)
	{
		rem=n%2;
		n=n/10;
		result=result+rem*pow(10,i);
		++i;
	}
	return result;
}
int main()
{
	int x,y;
	cout<<"Enter a binary number: ";
	cin>>x;
	binary(x);
	cout<<"The decimal equivalent of "<<x<<" is: "<<binary(x)<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Enter a decimal number: ";
	cin>>y;
	decimal(y);
	cout<<"The binary equivalent of "<<y<<" is: "<<decimal(x)<<endl;
	cout<<"--------------------------------------------------"<<endl;

	return 0;
}
