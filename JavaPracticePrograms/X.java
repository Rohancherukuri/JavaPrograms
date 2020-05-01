// Interface extending from other Interfaces
interface Interface1
{
      void f1();
}
   //Interface2 extending Interface1
interface Interface2 extends Interface1
{
     void f2();
}
class X implements Interface2
{
     //definition of method declared in interfacel
     public void f1()
   {
        System.out.println("Contents of Method f1() in Interface1");
    }
    public void f2()
   {
        System.out.println("Contents of Method f2() in Interface2");
   }
     public void f3()
   {
        System.out.println("Contents of Method f3() of Class X");
   }
}
class ExtendingInterface
{
     public static void main(String args[])
     {
       Interface2 v2; //Reference variable of Interface2
       v2 = new X();  //assign object of class x
       v2.f1();
       v2.f2();
       X xl=new X();
       xl.f3();    
     }
}
