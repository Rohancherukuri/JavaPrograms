// Creating a Cuboid
#include<iostream>
using namespace std;
class Cuboid
{
	private:
	int length,breadth,height;

	public:
	Cuboid(int l,int b,int h);
	int Perimeter(int,int,int);
	int Volume(int,int,int);
	void Display();
};
Cuboid::Cuboid(int l,int b,int h)
{
	length=l;
	breadth=b;
	height=h;
}
int Cuboid::Perimeter(int l,int b,int h)
{
	int p;
	p=2*(l*b+b*h+l*h);
	return p;
}
int Cuboid::Volume(int l,int b,int h)
{
	int vol;
	vol=l*b*h;
	return vol;
}
int main()
{
	int l,b,h;
	cout<<"Enter the length,breadth & height of a Cuboid: ";
	cin>>l>>b>>h; 
	Cuboid c(l,b,h);
	cout<<"The Perimeter of a Cuboid is: "<<c.Perimeter(l,b,h)<<endl;
	cout<<"The Volume of a Cuboid is: "<<c.Volume(l,b,h)<<endl;
	return 0;
}
