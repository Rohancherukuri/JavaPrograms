// Creating a ArrayList in java
import java.util.*;
class MyArrayList
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		ArrayList<String> arr=new ArrayList<String>();
		System.out.print("Enter numbers into the ArrayList: ");
		while(sc.hasNextLine())
		{
			arr.add(sc.nextLine());
			System.out.println(arr+" ");
		}
	}
}
	

