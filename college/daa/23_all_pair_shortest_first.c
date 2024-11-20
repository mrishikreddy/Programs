#include<stdio.h>
#include<limits.h>
int main()
{
    int size=4,i,j,k;
    int arr[4][4]={{0,5,INT_MAX,9},
        {INT_MAX,0,3,4},
        {INT_MAX,INT_MAX,0,1},
        {INT_MAX,INT_MAX,INT_MAX,0}};
    for(k=0;k<size;k++)
    {
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(arr[i][k]!=INT_MAX && arr[k][j]!=INT_MAX)
                {
                    if(arr[i][j]>arr[i][k]+arr[k][j])
                        arr[i][j] = arr[i][k]+arr[k][j];
                }
            }
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i][j]==INT_MAX)
            printf("INF ");
            else
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}