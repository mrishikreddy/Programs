enum msg
{
    running,pending,success,failed,retry;
}

class out
{
    public static void main(String args[])
    {
        msg refvar = msg.running;
        System.out.println(refvar+"\n");

        msg[]  arr = msg.values();
        for(msg i : arr)
        {
            System.out.println(i);
        }
    }
}