class out
{
    public static void main(String args[])
    {
        int j=0;
        try
        {
            j = 18/20;
            if(j==0)
            throw new ArithmeticException("The result cannot be zero");
        }
        catch(ArithmeticException e)
        {
            System.out.println("redirecting to default value\n"+e);
            j = 18;
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        System.out.println(j);
    }
}