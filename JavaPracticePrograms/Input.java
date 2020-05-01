// Different ways in taking input from the user
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Input
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter your name: ");
		String n=br.readLine();
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter your unique id: ");
		int id=sc.nextInt();
		System.out.println("Your name is: "+n);
		System.out.println("Your unique id is: "+id);
	}
}	


