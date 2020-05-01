// Calling toString() method in java
import java.util.Scanner;
class MyString
{
	 String name;
	MyString(String n)
	{
		this.name=n;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter your name: ");
		String n=sc.nextLine();
		MyString ms=new MyString(n);
		String name=ms.toString();
		System.out.println("The value in the String is: "+name);
	}
}
