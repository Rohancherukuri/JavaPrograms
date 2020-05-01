// Checking the greatest number among two numbers
import java.util.Scanner;
class Greatest
{
	public static void main(String args[])
	{
		int x,y;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the first number: ");
		x=sc.nextInt();
		System.out.print("Enter the second number: ");
		y=sc.nextInt();
		if(x>y)
			System.out.println(x+" is greater than "+y);
		else
			System.out.println(y+" is greater than "+x);
	}
}
