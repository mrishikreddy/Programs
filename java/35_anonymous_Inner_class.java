class A
{
    public void show()
    {
        System.out.println("In A show");
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = new A()
        {
            public void show()
            {
                System.out.println("In new show");
            }
        };

        obj.show();
    }

}