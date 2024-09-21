class a
{
    public void show()
    {
        System.out.println("In show A");
    }
    public void config()
    {
        System.out.println("In config A");
    }

}
class b extends a
{
    public void show()
    {
        System.out.println("In show B");
    }

}

class out
{
    public static void main(String args[])
    {
    b obj = new b();
    obj.show();
    obj.config();
    }

}