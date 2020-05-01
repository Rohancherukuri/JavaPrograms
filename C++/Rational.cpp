// Creating a Rational class by Overloading << and + operator
#include<iostream>
using namespace std;
class Rational
{
	public:
	int p,q;

	public:
	friend Rational operator+(Rational r1,Rational r2);
	friend Rational operator-(Rational r1,Rational r2);
	friend Rational operator*(Rational r1,Rational r2);
	friend ostream & operator<<(ostream &o,Rational &r3);
};
Rational operator+(Rational r1,Rational r2)
{
	Rational t;
	if(r1.q==r2.q)
	{
		t.p=r1.p+r2.p;
		t.q=r1.q;
	}
	else
	{
		t.p=r1.p*r2.q+r2.p*r1.q;
		t.q=r1.q*r2.q;
	}
	return t;
}
Rational operator-(Rational r1,Rational r2)
{
	Rational t;
	if(r1.q==r2.q)
	{
		t.p=r1.p-r2.p;
		t.q=r1.q;
	}
	else
	{
		t.p=r1.p*r2.q-r2.p*r1.q;
		t.q=r1.q*r2.q;
	}
	return t;
}
Rational operator*(Rational r1,Rational r2)
{
	Rational t;
	t.p=r1.p*r2.p;
	t.q=r1.q*r2.q;
	return t;
}
ostream & operator<<(ostream &o,Rational &r3)
{
	o<<r3.p<<"/"<<r3.q<<endl;
	return o;
}
int main()
{
	Rational r1,r2,r3;
	cout<<"Enter the first rational number: ";
	cin>>r1.p>>r1.q;
	cout<<"Enter the second rational number: ";
	cin>>r2.p>>r2.q;
	r3=r1+r2;
	cout<<"The sum of two rational numbers are:"<<endl;
	cout<<r3<<endl;
	r3=r1-r2;
	cout<<"The difference of two rational numbers are: "<<endl;
	cout<<r3<<endl;
	r3=r1*r2;
	cout<<"The product of two rational numbers are: "<<endl;
	cout<<r3<<endl;
	return 0;
}
