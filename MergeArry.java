// Merging two sorted arrays
import java.util.Scanner;
class MergeArray
{
	static void merge(int [] A,int size1,int [] B,int size2)
	{
		int i=0,j=0,k=0;
		int size3=size1+size2;
		int C[]=new int[size3];
		while(i<size1 && j<size2)
		{
			if(A[i]<B[j])
			{
				C[k]=A[i];
				i++;
				k++;
			}
			else
			{
				C[k]=B[j];
				j++;
				k++;
			}
		}
		while(i<size1)
		{
			C[k++]=A[i++];
		}
		while(j<size2)
		{
			C[k++]=B[j++];
		}
		System.out.println("The merged array is: ");
		for(int z=0;z<C.length;z++)
		{
			System.out.print(C[z]+" ");
		}
		System.out.println();
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size of first array: ");
		int n1=sc.nextInt();
		System.out.print("Enter the size of second array: ");
		int n2=sc.nextInt();
		int A[]=new int[n1];
		int B[]=new int[n2];
		System.out.println("Enter the values into the first array: ");
		for(int i=0;i<A.length;i++)
			A[i]=sc.nextInt();
		System.out.println("Enter the values into the second array: ");
		for(int j=0;j<B.length;j++)
			B[j]=sc.nextInt();
		merge(A,n1,B,n2);
	}
}
