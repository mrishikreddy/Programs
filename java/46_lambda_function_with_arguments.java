@FunctionalInterface
interface A
{
    void show(int i);
}

class out
{
    public static void main(String args[])
    {
        A obj = i -> 
            {
                System.out.println("In show "+i);
            };

        // or A obj = i-> System.out.println("In show "+i);
        // must use () incase of multiple arguments
        // ex: A obj = (i,j)-> System.out.println("In show "+i+" and "+j);
        obj.show(5);
    }
}