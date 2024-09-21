class Mobile
{
    String brand;
    int price;
    static String type;

    static
    {
        type = "Phone";
        System.out.println("in static block");
    }

    public Mobile()
    {
        brand = "None";
        price = 0;
        System.out.println("in class block");
    }



}

class out
{
    public static void main(String args[])
    { 
        Mobile ph1 = new Mobile();
        Mobile ph2 = new Mobile();
    }
}