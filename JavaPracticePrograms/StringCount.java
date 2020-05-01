// Counting the length of the string in java
import java.util.Scanner;
class StringCount
{
	public static void main(String args[])
	{
		String n;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a string: ");
		n=sc.nextLine();
		System.out.println("The length of the string "+n+" is: "+n.length());
	}
}
