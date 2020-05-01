// Rverseing a pattern in java
import java.util.Scanner;
class PatternReverse
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n,i,j;
		System.out.print("Enter a number: ");
		n=sc.nextInt();
		for(i=n;i>=0;i--)
		{
			for(j=i;j>=0;j--)
			{
				System.out.print("*");
			}
			System.out.println(" ");
		}
		System.out.println();
	}
}
