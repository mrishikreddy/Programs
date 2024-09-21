class addition
{
    int result=0;
    public int add(int n1,int n2)
    {
        result = n1+n2;
        return result;
    }
}
class out{
    public static void main(String args[])
    {
        int num1=5,num2=2;
        addition obj = new addition();
        int res = obj.add(num1,num2);
        System.out.println("The result is "+res);

    }
}