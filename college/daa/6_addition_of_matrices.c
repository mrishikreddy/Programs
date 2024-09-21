#include<stdio.h>
int main()
{
    int arr[10][10],brr[10][10],i,j,rows,cols;
    printf("enter the rows and cols of matrices:");
    scanf("%d%d",&rows,&cols);
    printf("enter %d values for matrix 1:",rows*cols);
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&arr[i][j]);

    printf("enter %d values for matrix 1:",rows*cols);
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&brr[i][j]);

    for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
                printf("%d ",arr[i][j]+brr[i][j]);
            printf("\n");
        }
    return 0;
}