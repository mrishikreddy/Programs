class A
{
    public void show1()
    {
        System.out.println("In show A");
    }
}

class B extends A
{
    public void show2()
    {
        System.out.println("In show B");
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = (A)new B();    // implicit upcasting is done here
        obj.show1();          // Actual code A obj = (A) new B();
        
        B obj1 = (B) obj;     // downcating from type A --> B
        obj1.show2();
    }
}