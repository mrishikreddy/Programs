class out
{
    public static void main(String args[])
    {
        // Actual creation of string class refernce variable
        String str = new String("This is a String");
        String ref = new String(" variable");
        
        // string functions
        System.out.println(str.hashCode());
        System.out.println(str.charAt(12));
        System.out.println(str.concat("class"));
        System.out.println(str.concat(ref));
        


    }
}