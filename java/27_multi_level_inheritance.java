class A
{
    public void disA()
    {System.out.println("You are in method of class A");}
      
}

class B extends A
{
    public void disB()
    {System.out.println("You are in method of class B");}
}

class C extends B
{
    public void disC()
    {System.out.println("You are in method of class C");}
}

class out
{
    public static void main(String args[])
    {
        C obj = new C();
        obj.disA();
    }

}