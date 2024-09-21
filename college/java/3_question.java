//palindrome or not
class out
{
    public static void main(String args[])
    {
        int num=12321,temp=0,new_num=0;
        temp = num;
        while(temp!=0)
        {
            new_num=new_num*10+temp%10;
            temp/=10;
        }
        if(new_num==num)
        System.out.println(num+" is a palindrome");
        else
        System.out.println(num+" is not a palindrome");

    }
}