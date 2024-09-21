#include<stdio.h>
int main()
{
    int a[30],n,i,temp,t;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("the elements of array in reverse order are:");
    i=0;
    t=n;
    while(i<n)
    {
        temp=a[n-1];
        a[n-1]=a[i];
        a[i]=temp;
        i++;n--;
    }
    for(i=0;i<t;i++)
    printf("%d ",a[i]);
    return 0;
}