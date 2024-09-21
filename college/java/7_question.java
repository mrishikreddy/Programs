// read integer from cmd and check whether the argument is prime or not
class out
{
    public static void main(String args[])
    {
        int num = Integer.parseInt(args[0]);
        int count=0,i;
        for(i=3;i<=num/2;i++)
        {
            if(num%i==0)
            count++;
        }
        if(count==2)
        System.out.println("entered number is a prime number");
        else
        System.out.println("entered number is not a prime number");

    }
}