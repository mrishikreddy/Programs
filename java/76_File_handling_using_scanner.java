import java.io.*;
import java.util.*;
class FileDemo
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        try{
        FileWriter fw = new FileWriter("studentData.txt",true);
        int i=0,rollNo,phoneNo;
        String name;
        while(i<1)
        {
            System.out.println("enter the name,roll no, phone no of student "+(i+1));
            name = sc.nextLine();
            rollNo = sc.nextInt();
            sc.nextLine();
            phoneNo = sc.nextInt();
            sc.nextLine();
            fw.write(name+" , "+rollNo+" , "+phoneNo+"\n");
            i++;
        }
        fw.close();
        FileReader fr = new FileReader("studentData.txt");
        Scanner scf = new Scanner(fr);

        while(scf.hasNextLine())
        System.out.println(scf.nextLine());
        
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}