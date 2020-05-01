// Implementing toString() method in java 
class Sample
{ 
    
    int x;
    Sample(int a)
    {
        this.x = a;
    }
	public static void main(String args[])
	{
    
   	 	Sample samp = new Sample(20);
  		Integer obj = new Integer(8); 
  
  		String st = obj.toString(); 
  		System.out.println("value in string: " + st); //print1
  
  		String s1 = obj.toString(450); 
  		System.out.println("value in string: " + s1); //print2
   
  		String s2 = obj.toString(450,2); 
  		System.out.println("value in string: " + s2); //print3
  
 	 	System.out.println(samp);                     //print4
  		System.out.println(samp.toString());          //print5
	} 
} 
