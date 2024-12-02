class MyClass
{
    static{
    System.out.println("MyClass is created");
    }
}

class Out 
{
    public static void main(String args[]) throws ClassNotFoundException
    {
        Class.forName("MyClass");
    }
}