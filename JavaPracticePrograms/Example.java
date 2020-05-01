// Implemeting nested classes in java
class Outer
{
	 int x=10;

	 class Inner
	{
		void Osum()
		{
			System.out.println("Your Osum times "+x);
		}
	}
}
class Example
{
	public static void main(String args[])
	{
		Outer o=new Outer();
		Outer.Inner obj=o.new Inner();
		obj.Osum();
	}
}
