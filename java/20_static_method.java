class Mobile
{
    String brand;
    int price;
    static String type;

    public void display()
    {
        System.out.println(type+" : "+brand+" : "+price);
    }

    public static void display2(Mobile obj)
    {
        System.out.println(type+" : "+obj.brand+" : "+obj.price);
    }


}

class out
{
    public static void main(String args[])
    {
    Mobile ph1 = new Mobile();
    Mobile ph2 = new Mobile();
    
    ph1.brand = "Apple";
    ph1.price = 1_20_000;

    ph2.brand = "onePlus";
    ph2.price = 30_000;
    
    Mobile.type= "smartphone";  // <-- Intialization of static variable 

    ph1.display();
    ph2.display();
    System.out.println();

    Mobile.display2(ph1);
    Mobile.display2(ph2);

    }
}