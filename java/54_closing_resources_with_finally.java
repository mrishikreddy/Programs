import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class Demo
{
    public static void main(String args[]) throws IOException
    {
        int num = 0;
        BufferedReader br = null;
        try
        {  System.out.println("enter a number:");
            InputStreamReader var = new InputStreamReader(System.in);
            br = new BufferedReader(var);
            num = Integer.parseInt(br.readLine());
        }
        finally
        {
            System.out.println(num); 
            br.close();
        }
    }
}