// reading a charater

import java.util.*;
class out{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        char ch[] = new char[10];
        for(int i=0;i<10;i++)
            ch[i] = sc.next().charAt(0);
        
        String str = ch.toString()
    }
}