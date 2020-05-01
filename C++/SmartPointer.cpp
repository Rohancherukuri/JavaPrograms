// Creating smart pointers
#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
	private:
	int length,breadth;

	public:
	Rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	int l,b;
	cout<<"Enter length of the Rectangle: ";
	cin>>l;
	cout<<"Enter breadth of the Rectangle: ";
	cin>>b;
	shared_ptr<Rectangle> ptr(new Rectangle(l,b));
	cout<<"The perimeter is: "<<ptr->perimeter()<<endl;
	cout<<"The area is: "<<ptr->area()<<endl;
	shared_ptr<Rectangle> ptr2;
	ptr2=move(ptr);
	cout<<ptr2->perimeter()<<endl;
	cout<<ptr2->area()<<endl;

	return 0;
}	
