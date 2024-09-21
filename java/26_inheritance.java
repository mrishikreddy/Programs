class Calc
{
    public int add(int a,int b)
    {
        return a+b;
    }

    public int sub(int a,int b)
    {
        return a-b;
    }

}

class AdvCalc extends Calc
{
    public int  mul(int a,int b)
    {
        return a*b;
    }

    public int div(int a,int b)
    {
        return a/b;
    }

}

class out
{
    public static void main(String args[])
    {
        AdvCalc obj = new AdvCalc();
        System.out.println(obj.add(2,5));
        System.out.println(obj.mul(2,5));
    }
}