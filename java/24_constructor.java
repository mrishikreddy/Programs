class demo
{
    String name;
    int age;

    public demo()
    {
        name = "Rishik";            // initializing with default value
        age = 19;
    }

}

class out
{
    public static void main(String args[])
    {
        demo refvar = new demo();

        System.out.println(refvar.name+" : "+refvar.age);
    }
}