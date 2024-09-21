/*sorting a matrix in such a way that rows are arranged 
in ascending order and cols are arranged in desecending
order */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],i,j,k,rows,cols,temp;
    printf("enter number of rows and cols:");
    scanf("%d%d",&rows,&cols);
    printf("enter %d elements:",rows*cols);
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    scanf("%d",&a[i][j]);
    system("cls");
    printf("the matrix is:\n");
    for(i=0;i<rows;i++)
    {for(j=0;j<cols;j++)
    printf("%d ",a[i][j]);
    printf("\n");}
    printf("the matrix after sorting is:\n");
    for(k=0;k<rows;k++)
    {
    for(i=0;i<cols;i++)
    for(j=i+1;j<cols;j++)
    if(a[k][i]>a[k][j])
    {
        temp=a[k][i];
        a[k][i]=a[k][j];
        a[k][j]=temp;
    }
    }
    for(i=0;i<rows;i++)
    {for(j=0;j<cols;j++)
    printf("%d ",a[i][j]);
    printf("\n");}
    return 0;
} 