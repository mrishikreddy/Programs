#include<stdio.h>
int main()
{
    int arr[30],min=1000000,i;
    int *p;
    p=arr;
    printf("enter 10 array elements:");
    for(i=0;i<=9;i++)
    {scanf("%d",p);
    p++;    
    }
    p=p-10;
    for(i=0;i<=9;i++)
    {
        if(min>=*p)
        min=*p;
        p++;
    }
    printf("minimum number:%d",min);
    return 0;

}