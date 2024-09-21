#include<stdio.h>
int main()
{
    int a[5][5][5],b[5][5][5],c[5][5][5],i,j,z,ax,ay,az;
    printf("enter the dimensions of matrices:");
    scanf("%d%d%d",&ax,&ay,&az);
    printf("enter %d values of matrix 1:",ax*ay*az);
    for(i=0;i<ax;i++)
    {
        for(j=0;j<ay;j++)
        {
            for(z=0;z<az;z++)
            scanf("%d",&a[i][j][z]);
        }
    }

    printf("enter %d values of matrix 2:",ax*ay*az);
    for(i=0;i<ax;i++)
    {
        for(j=0;j<ay;j++)
        {
            for(z=0;z<az;z++)
            scanf("%d",&b[i][j][z]);
        }
    }
     for(i=0;i<ax;i++)
    {
        for(j=0;j<ay;j++)
        {
            for(z=0;z<az;z++)
            c[i][j][z]=a[i][j][z]+b[i][j][z];
        }
    }

    printf("The resultant mtrix is:\n");
    for(i=0;i<ax;i++)
    {
        for(j=0;j<ay;j++)
        {
            for(z=0;z<az;z++)
            printf("%d ",c[i][j][z]);
            printf("\n");
        }
        printf("\n\n");
    }
}