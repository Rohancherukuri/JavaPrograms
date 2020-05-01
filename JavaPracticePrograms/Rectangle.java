// Creating a rectangle
import java.util.Scanner;
class Rectangle
{
	 double length,breadth;
	 Rectangle(double l,double b)
	 {
		 length=l;
		 breadth=b;
	 }
	 double perimeter()
	 {
		return 2*(length+breadth);
	 }
	 double area()
	 {
		 return length*breadth;
	 }
}
class RectangleDemo
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter length: ");
		double l=sc.nextDouble();
		System.out.print("Enter breadth: ");
		double b=sc.nextDouble();
		Rectangle r=new Rectangle(l,b);
		if(l==b)
		{
			System.out.println("The shape is a Square");
		}
		else
		{
			System.out.println("The perimeter is: "+r.perimeter());
			System.out.println("The area is: "+r.area());
		}
	}
}


