class out
{
    public static void main(String args[])
    {
        int numa = Integer.parseInt(args[2]);
        int numb = Integer.parseInt(args[3]);
        System.out.println("1st argumnet is: "+args[0]);
        System.out.println("2nd argumnet is: "+args[1]);
        System.out.println("3rd argumnet is: "+args[2]);
        System.out.println("4th argumnet is: "+args[3]);
        System.out.println("string summation of args[2] and args[3] is: "+(args[2]+args[3]));
        System.out.println("sum is of args[2] and args[3] is: "+(numa+numb));
        // sample input  "java out hi hello 100 7"
    }

}