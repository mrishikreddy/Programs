#include<stdio.h>
int main()
{
    int size,i,j,min,ind;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int a[size];
    printf("enter %d elements:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        min=a[i];
        ind=i;
        for(j=i+1;j<size;j++)
        if(min > a[j])
        {
            min=a[j];
            ind=j;
        }
        a[ind]=a[i];
        a[i]=min;
    }
    printf("the sorted order of elements are:");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}