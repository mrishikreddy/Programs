class literals
{
    public static void main(String a[])
    {
        int num = 0b101; // 101 = 5
        int hex = 0x7E;
        int large = 1_00_00_00_000;
        double num2 = 1.2e11;
        char c = 'a';
        System.out.println(num+"\n"+hex+"\n"+large+"\n"+num2+"\n"+c+"\n"+ ++c);

    }
}