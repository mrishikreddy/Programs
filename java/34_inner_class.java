
class A
{
    class B
    {
        public void show()
        {
            System.out.println("In inner class");
        }
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = new A();
        A.B obj1 = obj.new B();
        obj1.show();
    }
}

/* or 
class A
{
    static class B                                <-- by using static keyword
    {
        public void show()
        {
            System.out.println("In inner class");
        }
    }
}

class out
{
    public static void main(String args[])
    {
        A.B obj = new A.B();
        obj.show();
    }
}

*/
