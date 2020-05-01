// Finding a character in a string in java
import java.util.Scanner;
class FindingCharacter
{
  	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a string: ");
    		String n=sc.nextLine();
		System.out.print("Enter a character to be searched: ");
		char c=sc.next().charAt(0);
    		for(int i=0;i<n.length();i++)
		{
      			if(n.charAt(i)==c)
			{
        			System.out.println("The character "+c+" is present in the string "+n);
				return;
      			}

		}
    		System.out.println("The character "+c+" is not present in the string "+n);
  	}
}	
