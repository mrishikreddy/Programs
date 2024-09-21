class out
{
    public static void main(String args[])
    {
        int arr[][] = new int[3][];
        arr[0] = new int[3];
        arr[1] = new int[2];
        arr[2] = new int[4];

        int i,j;
        for(i=0;i<arr.length;i++)
        for(j=0;j<arr[i].length;j++)
        arr[i][j]=j+1;

        for(int m[]:arr)
        {
            for(int n:m)
            System.out.print(n+" ");

            System.out.println();
        }

        

    }
}