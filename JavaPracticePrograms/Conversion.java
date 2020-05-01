import java.math.BigDecimal;
import java.math.MathContext;
import java.util.Scanner;
class Conversion
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        double no;
        int scale;
        System.out.print("Enter a decimal number: ");
        no=sc.nextDouble();
        System.out.println("The decimal number entered is:  "+no);
        BigDecimal obj1 = new BigDecimal(no);
        BigDecimal obj2 ;
        System.out.print("Enter the precision or scale value: ");
        scale=sc.nextInt();
	if(scale==1)
		System.out.println("Improper selection!");
	else
	{
        	MathContext pr = new MathContext(scale);    
        	obj2=obj1.round(pr);
        	System.out.println("The rounded off BigDecimal value is:  "+obj2);
	}
    }
       
}
