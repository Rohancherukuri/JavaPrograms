// Checking a word in a given sentence
import java.util.*;
class StringCheck
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a sentence: ");
		String n=sc.nextLine();
		System.out.print("Enter a word to be searched: ");
		String w=sc.nextLine();
		boolean c=n.contains(w);
		System.out.println(c);
		if(c==true)
			System.out.println("The word "+w+" is present in the sentence");
		else
			System.out.println("The word "+w+" is not present in the sentence");
	}
}
