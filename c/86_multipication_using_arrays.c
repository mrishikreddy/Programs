#include<stdio.h>
int main()
{
    int arr[20][20],brr[20][20],i,j,k,crr[20][20],rows1,rows2,cols1,cols2;
    printf("enter the rows and columns of matrix 1:");
    scanf("%d%d",&rows1,&cols1);
    printf("enter %d elements",rows1*cols1);
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
          scanf("%d",&arr[i][j]);
    }
    printf("\nelements of matrix 1 are:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
        printf("%d",arr[i][j]);

        printf("\n");
    }
    printf("enter the rows and columns of matrix 2:");
    scanf("%d%d",&rows2,&cols2);
    printf("enter %d elements",rows2*cols2);
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
          scanf("%d",&brr[i][j]);
    }
    printf("the elements of matrix 2 are:\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
        printf("%d",brr[i][j]);

        printf("\n");
    }
    if(cols1==rows2)
    {
        for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            crr[i][j]=0;
            for(k=0;k<rows2;k++)
            {
                crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
            }
        }
        }
    printf("\nmultiplication is:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        printf("%d ",crr[i][j]);

        printf("\n");
    }

    }
}

