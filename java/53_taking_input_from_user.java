import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

class out
{
    public static void main(String args[])
    {
        int num=0;
        try
        {
        System.out.println("Enter a number");
        num = System.in.read();
        System.out.println(num);
        }
        catch(Exception e)
        {
            System.out.println("Input error");
        }
        
        System.out.println("Enter a number");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        System.out.println(num);
    }
}