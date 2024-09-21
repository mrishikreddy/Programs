class A
{
    public void show()
    {
        System.out.println("In show A");
    }
}

@Override
class B extends A
{
   
    public void show()
    {
        System.out.println("In show A");
    }
}

class out
{
    public static void main(String args[])
    {
        B obj = new B();
        obj.show();
    }
}