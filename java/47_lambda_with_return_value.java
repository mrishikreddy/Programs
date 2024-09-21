interface A 
{
    public int sum(int i,int j);
}

class out
{
    public static void main(String args[])
    {
        A obj = (i,j) -> i+j;
        int result = obj.sum(5,2);
        System.out.println(result);
    }
}