final class MyClass
{
    final public void wish()
    {
        System.out.println("This is a final method");
    }

    public void say()
    {
        System.out.println("This method is present in final class");
    }

}


class out 
{
    public static void main(String args[])
    {
        MyClass obj = new MyClass();
        obj.wish();
        obj.say();

        final String str = "RISHIK";
        System.out.println("This is a final string : "+str);
    }

}