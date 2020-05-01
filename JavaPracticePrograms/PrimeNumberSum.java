// Calculating the sum of prime numbers at given range
import java.util.Scanner;
class PrimeNumberSum
{
	static void prime(int n)
	{
		int p,i,result=0;
		for(p=2;p<=n;p++)
		{
			for(i=2;i<=p;i++)
			{
				if(p%i==0)
					break;
			}
			if(p==i)
				//System.out.println(p);
				result=result+p;
		}
		System.out.println("The sum of prime numbers at given range is: "+result);
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number: ");
		int x=sc.nextInt();
		prime(x);
	}
}
