#include<stdio.h>
int size;
void s(int a[],int first,int last)
{
    int i,j,p,temp;
    if(first<last)
    {
    i=first;
    p=first;
    j=last;
    while(i<j)
    {
        while(a[i]<=a[p] && i<=j)
        i++;
        while(a[j]>a[p] && i<=j)
        j--;
        if((i<j)&&(a[i]>a[j]))
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       
    }
    if(i>j)
    {
        temp=a[p];
        a[p]=a[j];
        a[j]=temp;
    }  
    s(a,first,j-1);
    s(a,j+1,last);
    }  
}
int main()
{
    int a[20],i;
    printf("enter the number of elements:");
    scanf("%d",&size);
    printf("enter %d elements:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    s(a,0,size-1);
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}