// Swapping two variables
#include<iostream>
using namespace std;
void Swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"x="<<x<<" y="<<y<<endl;
}
int main()
{
	Swap(5,10);
	return 0;
}

