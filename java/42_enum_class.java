enum laptop
{
    Macbook(2000),hp(1000),acer(),dell(900);

    private int price;

    private laptop()
    {
        this.price=500;
    }

    private laptop(int price)
    {
        this.price=price;
    }
    public int getPrice()
    {
        return this.price;
    }
    public void setPrice(int price)
    {
        this.price=price;
    }
}

class out
{
    public static void main(String args[])
    {
        for(laptop lap : laptop.values())
        {
            System.out.println(lap+" : "+lap.getPrice());
        }
    }
}