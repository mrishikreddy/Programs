class out
{
    public static void main(String args[])
    {
        int j = 9,result = 0;
        try 
        {
            result = 9/0;
        }
        catch(Exception e)
        {
            System.out.println("Here is the exception :"+e);
        }
        System.out.println("bye");
    }
}