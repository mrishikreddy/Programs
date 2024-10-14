class out{
    public static void main(String args[])
    {
        String s[] = new String[5];
        s[0] = "string 1";
        s[1] = "string 2";
        s[2] = "string 3";
        s[3] = "string 4";
        s[4] = "string 5";
        for(String sele : s)
        {
            System.out.println(sele);
        }
    }
}