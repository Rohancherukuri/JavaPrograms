// Java Program to demonstrate overloading of 
// main() method
import java.io.*;

class MainMethodOverloading
{
    // Origional main() method
    public static void main(String args[])
    {
        System.out.println("Hi, We are in main (String args[]) ");
        MainMethodOverloading.main("Call main() with one argument");
    }
    // These are the overloaded main() methods 
    public static void main(String args1)
    {
        System.out.println(args1);
        MainMethodOverloading.main("call main() with ", " two argument");
    }
    public static void main(String args1, String args2)
    {
        System.out.println(args1 + args2);
        MainMethodOverloading.main("call main() with ", " three argument ", " from two argument main()");
    }
    public static void main(String args1, String args2, String args3)
    {
        System.out.println(args1 + args2 + args3);
    }
}

