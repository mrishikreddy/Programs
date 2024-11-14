class demo
{
    int num=5;
    public static void display()
    {
        System.out.println("You are using a method of class demo");
    }
}

class out
{
    public static void main(String args[])
    {
        demo var1 = new demo();
        demo var2 = new demo();
        
        System.out.println(var1.num+" "+var2.num);

        var1.num = 7;

        System.out.println("\nafter changing one instance of varaible in class");
        System.out.println(var1.num+" "+var2.num);
        

    }
}