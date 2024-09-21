#include<stdio.h>
int main()
{
    int i,j,size,a[20],temp;
    printf("enter the number of elements:");
    scanf("%d",&size);
    printf("enter the %d elements:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("elements before sorting:");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    for(i=0;i<size-1;i++)
    {for(j=0;j<size-i-1;j++)
       if(a[j]>a[j+1])
       {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
       }              
    }
    printf("\nafter sorting the elements are:");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}