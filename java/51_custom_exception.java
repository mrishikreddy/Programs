class MyException extends Exception
{
    public MyException(String args)
    {
        super(args);
    }
}

class out
{
    public static void main(String args[])
    {
        int j=0;
        try
        {
            j = 4/2;
            if(j==2)
            throw new MyException("Got MyException");
        }
        catch(MyException e)
        {
            System.out.println(e);
            System.out.println(j);
            
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}