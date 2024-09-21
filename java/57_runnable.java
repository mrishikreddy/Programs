class A implements Runnable
{
    public void run()
    {
        int i;
        for(i=0;i<5;i++)
        {System.out.println("Hi");
        try{Thread.sleep(5);} catch(InterruptedException e){System.out.println(e);}}
        
    }
}
class B implements Runnable
{
    public void run()
    {
        int i;
        for(i=0;i<5;i++)
        {System.out.println("Hello");
        try{Thread.sleep(5);} catch(InterruptedException e){System.out.println(e);}}
        
    }
}

class Demo
{
    public static void main(String args[])
    {
        Runnable obj1 = new A();
        Runnable obj2 = new B();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);
        t1.start();
        t2.start();
    }
}