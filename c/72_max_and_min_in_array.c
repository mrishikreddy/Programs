#include<stdio.h>
int main()
{
    int n,a[20],max,min;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];

        if(min>a[i])
        min=a[i];
    }
    printf("the maximum value is:%d\nthe minimum value is:%d",max,min);
    return 0;
}