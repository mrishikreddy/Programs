interface A 
{
    void show();
}

interface X
{
    void run();
}

interface Y extends X
{

}

class B implements A,Y
{
    public void show()
    {
        System.out.println("In show");
    }

    public void run()
    {
        System.out.println("Running");
    }
}

class out
{
    public static void main(String args[])
    {
        B obj = new B();
        obj.show();
        obj.run();
    }
}