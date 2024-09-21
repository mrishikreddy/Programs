class out
{
    public static void main(String args[])
    {
        int arr[] = new int[5];
        int result = 0;
        String str = null;
        try 
        {
            result = 7/5;                   // put result= 7/0 to get exception
            System.out.println(arr[4]);     // put arr[5] to get exception
            System.out.println(str.length());

        }
        catch(ArithmeticException e)
        {
            System.out.println("Cannot divide a number by Zero");
        }
         catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Index out of range");
        }
        catch(Exception e)
        {
            System.out.println("Here is the exception: "+e);
        }
    }
}