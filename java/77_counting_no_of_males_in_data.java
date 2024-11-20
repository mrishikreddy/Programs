import java.io.*;
import java.util.*;
class FileDemo
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        try{
        FileWriter fw = new FileWriter("studentData.txt",true);
        int i=0;
        String[] arr = new String[4];
        while(i<5)
        {
            System.out.println("enter the name, roll no, phone no,gender of student "+(i+1));
            arr[0] = sc.nextLine();
            arr[1] = sc.nextLine();
            arr[2] = sc.nextLine();
            arr[3] = sc.nextLine();

            fw.write(arr[0]+" , "+arr[1]+" , "+arr[2]+" , "+arr[3]+"\n");
            i++;
        }
        fw.close();
        int count_gender = 0;
        FileReader fr = new FileReader("studentData.txt");
        Scanner scf = new Scanner(fr);
        while(scf.hasNextLine())
           {   
                arr = scf.nextLine().split(" , ");
                if(arr[3].trim().equals("m"))
                    count_gender++;
           }
        System.out.println("The number of males are: "+count_gender);


        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}


// how to rename the file