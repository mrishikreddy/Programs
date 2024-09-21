class restrict
{
    private String name ;

    public void set_name(String name)
    {
        this.name = name;
    }

    public String get_name()
    {
        return this.name;
    }

}
class out
{
    public static void main(String args[])
    {
        restrict obj = new restrict();

        obj.set_name("Rishik");
        
        String result = obj.get_name();

        System.out.println(result);

    }

}