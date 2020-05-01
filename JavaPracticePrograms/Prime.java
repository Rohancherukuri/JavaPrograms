// Checking wheather the number is prime or not
import java.util.Scanner;
class Prime
{
	static int prime(int n)
	{
		int i,count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				count++;
		}
		return count;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number: ");
		int x=sc.nextInt();
		prime(x);
		if(prime(x)==2)
			System.out.println("The number "+x+" is a prime number");
		else
			System.out.println("The number "+x+" is not a prime number");
	}
}


