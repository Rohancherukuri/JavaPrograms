// Pattern in java
import java.util.Scanner;
class Pattern
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n;
		System.out.print("Enter a number: ");
		n=sc.nextInt();
		printpattern(n);
		printreversepattern(n);
	}
	static void printpattern(int n)
	{
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print("*");
			}
			System.out.println(" ");
		}
		//System.out.println();
	}
	static void printreversepattern(int n)
	{
		for(int i=n;i>=0;i--)
		{
			for(int j=i;j>=0;j--)
			{
				System.out.print("*");
			}
			System.out.println(" ");
		}
		System.out.println();
	}
}
