class A
{
    public A()
    {
        System.out.println("In A");
    }
    public A(int n)                                             // 3
    {
        System.out.println("In A in int");                      // 4
    }


}

class B extends A
{
    public B()
    {   super(5);                                               // 2
        System.out.println("In B");                             // 5
    }
    public B(int n)                                             // 1
    {   this();                                                 
        System.out.println("In B in int");                      // 6
    }

}

class out
{
    public static void main(String args[])
    {
        B obj = new B(5);

    }
}