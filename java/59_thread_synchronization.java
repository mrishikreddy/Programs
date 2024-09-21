class counter
{
    int count = 0;
    public synchronized void increment()
    {
        count++;
    }
}

class Demo
{
    public static void main(String args[])
    {
        counter c = new counter();

        Runnable obj1 = ()->
        {
            for(int i = 0;i<1000;i++)
            c.increment();
        };

        Runnable obj2 = ()->
        {
            for(int i = 0;i<1000;i++)
            c.increment();
        };

        try
        {
        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();

        
            t1.join();
            t2.join();
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }

        System.out.println(c.count);


    }

}