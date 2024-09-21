import java.util.*;
class out
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number: ");
        int num = sc.nextInt();
        int a = 0,b = 1,sum = 0,i = 0;
        while(i<num)
        {
            sum = a+b;
            System.out.print(a+" ");
            a = b;
            b = sum;
            i++;
        }
    }
}