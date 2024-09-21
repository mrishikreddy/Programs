class out
{
    public static void main(String args[])
    {
        // implicit type casting
        byte b = 12;
        int a = b;
        System.out.println("value of a:"+a);

        // explicit conversion
        int  d = 258;
        byte c = (byte)d;
        float fnum = 5.934f;
        int num = (int)fnum;
        System.out.println("value of c:"+c+"\nvalue of num:"+num);

        //type promotion
        byte p=10,q=30;
        int result = p*q;
        System.out.println("value of result:"+result);

    }
}