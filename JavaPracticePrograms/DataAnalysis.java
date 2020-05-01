// Calculating mean,median and mode of a given Array
import java.util.Scanner;
class DataAnalysis
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the of an Array: ");
		int n=sc.nextInt();
		double A[]=new double[n];
		System.out.println("Enter the values into  the Array: ");
		for(int i=0;i<A.length;i++)
		{
			A[i]=sc.nextInt();
		}
		mean(A,n);
		median(A,n);
		mode(A,n);
	}
	// Mean of the given Array
	static void mean(double [] A,int n)
	{
		double avg=0;
		for(int i=0;i<n;i++)
		{
			avg=avg+A[i];
		}
		avg=avg/n;
		System.out.println("The mean of the given Array is: "+avg);
	}
	// Median of the given Array for odd sizes 
	static void median(double [] A,int n)
	{
		double avg;
		if(n%2==0)
			avg=(A[n/2]+A[n+1/2])/2;
		else
			avg=n/2;
		System.out.println("The median of the given Array is: "+avg);
	}
	// Mode of the given Array 
	static void mode(double [] A,int n)
	{
		for (int i=0;i<n;i++)  
       	 	{	 
            		for (int j=i+1;j<n;j++)  
            		{	 
                		if (A[i]==A[j])  
			       		System.out.println("The mode of the given Array is: "+A[i]);	
            		} 
        	} 
	}
}
