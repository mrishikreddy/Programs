class A
{
    public void show()
    {
        System.out.println("In show A");
    }
}

class B extends A
{
    public void show()
    {
        System.out.println("In show B");
    }
}

class C  extends B
{
    public void show()
    {
        System.out.println("In show C");
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = new A();
        obj.show();

        obj = new B();                      // type of obj is still A
        obj.show();

        obj = new C();                      // type of obj is still A
        obj.show();
    }
}

// here same method obj.show() behaves differently with different objects
// note all classes should be in inheritance