interface A
{
    int num = 7;
    void show();
}

class B implements A
{
    public void show()
    {
        System.out.println("In show");
    }
}

class out
{
    public static void main(String args[])
    {
        A obj = new B();
        obj.show();
        System.out.println(A.num);                  // because num is a static variable
    }
}