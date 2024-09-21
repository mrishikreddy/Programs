class A extends Thread
{
    public void run()
    {
        int i;
        for(i=0;i<100;i++)
        {System.out.println("Hi");
        try 
        {
            Thread.sleep(5);
        }
        catch(InterruptedException e)
        {
            System.out.println("Exception occured"+e);
        }
        }
    }
}
class B extends Thread
{
    public void run()
    {
        int i;
        for(i=0;i<100;i++)
        {System.out.println("Hello");
        try 
        {
            Thread.sleep(5);
        }
        catch(InterruptedException e)
        {
            System.out.println("Exception occured"+e);
        }
        }
    }
}

class Demo
{
    public static void main(String args[])
    {
        A obj1 = new A();
        B obj2 = new B();
        obj1.start();
        try 
        {
            Thread.sleep(5);
        }
        catch(InterruptedException e)
        {
            System.out.println("Exception occured"+e);
        }
        obj2.start();
    }
}