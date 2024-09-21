class out
{
    public static void main(String args[])
    {
        int arr[][][] = new int[4][4][4];
        int i,j,k;
        for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        for(k=0;k<4;k++)
        arr[i][j][k] = (int)(Math.random()*100);    // <-- used random function to generate values

        for(int m[][] : arr)                        // <--used enchanced for loop ,it returns every 
        {for(int n[] : m)                           // 2D array from 3D array, so m is declared as 2D array
        {
            for(int o : n)
            System.out.print(o+" ");

            System.out.println();

        }
            System.out.println();
        }

        
    }
}