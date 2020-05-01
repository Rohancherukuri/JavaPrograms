// Reversing an Array in java
import java.util.Scanner;
class ReverseArray
{
	static void reverseArray(int [] A,int n)
	{
		for(int i=n-1;i>=0;i--)
		{
			System.out.print(A[i]+" ");
		}
		System.out.println();
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size of an Array: ");
		int n=sc.nextInt();
		int A[]=new int[n];
		System.out.println("Enter the values into the Array: ");
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		System.out.println("-------------");
		reverseArray(A,n);
	}
}
		 
