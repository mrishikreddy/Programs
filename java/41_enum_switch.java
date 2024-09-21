enum status
{
    running,waiting,pending,success;
}

class out
{
    public static void main(String args[])
    {
       status s = status.success;

       switch(s)
       {
      
       case running:System.out.println("running");break;
       case waiting :System.out.println("waiting");break;
       case pending :System.out.println("pending");break;
       case success :System.out.println("success");break;
       default:System.out.println("Invalid Input");break;
       }
    }

}