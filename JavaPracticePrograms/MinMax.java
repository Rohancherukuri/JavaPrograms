// Finding mminimum and maximum elements in an array
import java.util.Scanner;
public class MinMax
{
  public static void main(String args[])
  {
       
       Scanner sc=new Scanner(System.in);
       System.out.print("Enter the size of an Array: ");
       int n=sc.nextInt();
       int A[]=new int[n];
       System.out.println("Enter elements in array");
       int min=Integer.MAX_VALUE;
       int max=Integer.MIN_VALUE;
       for(int i=0;i<A.length;i++)
       {
         A[i]=sc.nextInt();
         if(A[i]>max)
           {
            max=A[i];
           }
         if(A[i]<min)
         {
           min=A[i];
         }
       }
       System.out.println("Maximum element is "+max);
       System.out.println("Minimum element is "+min);
  }
}
