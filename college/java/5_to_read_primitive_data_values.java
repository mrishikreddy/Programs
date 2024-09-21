import java.util.*;
class out
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a number of integer type:");
        int inn = sc.nextInt();
        System.out.print("enter a number of float type:");
        float fn = sc.nextFloat();
        System.out.print("enter a number of char type:");
        char chn = sc.next().charAt(0);
        System.out.print("enter a number of double type:");
        double dn = sc.nextDouble();
        System.out.print("enter a number of byte type:");
        byte bn = sc.nextByte();
        System.out.print("enter a number of short type:");
        short sn = sc.nextShort();
        System.out.print("enter a number of long type:");
        long ln = sc.nextLong();
        System.out.print("enter a number of boolean type:");
        boolean booln = sc.nextBoolean();

        System.out.println("\nentered integer value:"+inn);
        System.out.println("entered float value:"+fn);
        System.out.println("entered char value:"+chn);
        System.out.println("entered double value:"+dn);
        System.out.println("entered byte value:"+bn);
        System.out.println("entered short value:"+sn);
        System.out.println("entered long value:"+ln);
        System.out.println("entered boolean value:"+booln);



    }

}