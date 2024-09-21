class m_overload
{
    public static int add(int n1,int n2)
    {
        return n1+n2;
    }
    public static int add(int n1,int n2,int n3)
    {
        return n1+n2+n3;
    }
    public static double add(double n1,double n2)
    {
        return n1+n2;
    }

}
class out
{
    public static void main(String args[])
    {
        m_overload obj = new m_overload();
        System.out.println(m_overload.add(2,3));
        System.out.println(m_overload.add(2,3,4));
        System.out.println(m_overload.add(2.245,3.234));
    }
}