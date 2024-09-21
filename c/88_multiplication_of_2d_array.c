#include<stdio.h>
int main()
{
    int i,j,k,rows1,cols1,rows2,cols2,arr[5][5],brr[5][5],crr[5][5];
    printf("enter the rows and cols of matrix a:");
    scanf("%d%d",&rows1,&cols1);
    printf("enter %d elements",rows1*cols1);
    for(i=0;i<rows1;i++)
    for(j=0;j<cols1;j++)
    {
        scanf("%d",&arr[i][j]);
    }

    printf("enter the rows and cols of matrix b:");
    scanf("%d%d",&rows2,&cols2);
    printf("enter %d elements",rows2*cols2);
    for(i=0;i<rows2;i++)
    for(j=0;j<cols2;j++)
    {
        scanf("%d",&brr[i][j]);
    }

    if(cols1==rows2)
    {
     for(i=0;i<rows1;i++)
     {
        for(j=0;j<cols2;j++)
        {
            crr[i][j]=0;
            for(k=0;k<rows2;k++)
                crr[i][j]+=arr[i][k]*brr[k][j];
        }
     }
    for(i=0;i<rows1;i++)
    {for(j=0;j<cols2;j++)
    {
        printf("%d ",crr[i][j]);
    }printf("\n");}
    
    }
    else
    {
        printf("matrix multiplication is not possible");
    }
    return 0;

}