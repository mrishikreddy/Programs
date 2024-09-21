class A
{
    public void methodA() throws ClassNotFoundException      // or use throws Exception
    {
        Class.forName("Calc");        // checks if Calc class is available or not
                                     //  if not it raises exception
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = new A();
        try
        {
            obj.methodA();
        }
        catch(ClassNotFoundException e)
        {
            System.out.println("class not found");
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        
    }
}