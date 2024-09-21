abstract class A
{
    public void show();
}

class out
{
    public static void main(String args[])
    {
        A obj = new A()                   // <-- here abstract class can't create any objects
        {                                //      actually object of inner class is created with 
            public void show()          //       help of Anonymous inner class
            {
                System.out.println("In new show");
            }                   
        };  

    }
}