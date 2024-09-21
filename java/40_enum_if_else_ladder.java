enum status
{
    running,waiting,pending,success;
}

class out
{
    public static void main(String args[])
    {
       status s = status.running;

       if(s == status.running)
       System.out.println("running");
       else if(s== status.waiting)
       System.out.println("waiting");
       else if(s==status.pending)
       System.out.println("pending");
       else if(s==status.success)
       System.out.println("success");
       else
       System.out.println("Invalid Input");
    }

}