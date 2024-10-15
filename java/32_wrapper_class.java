class out
{
    public static void main(String args[])
    {
        int num = 7;
        Integer num1 = num;     // autoBoxing   Actual code : Integer num1 = new Integer(num1);
        int num2 = num1;        // UnBoxing Actual code : int num2 = num1.intValue();
        System.out.println(num2);

        String str = "12";
        int num3 = Integer.parseInt(str);  // converts str --> integer
        System.out.println(num3);
    }
}