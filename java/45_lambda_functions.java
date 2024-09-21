@FunctionalInterface
interface A
{
    void show();
}

class out
{
    public static void main(String args[])
    {
        A obj =() -> 
            {
                System.out.println("In show");
            };
        

        obj.show();
    }
}