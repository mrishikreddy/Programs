#include<stdio.h>
int main()
{
    int a[20];
    int n,i,num,f=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter a number to search in array:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    if(a[i]==num)
    {printf("the entered number is found at index %d",i);
    f++;}
    if(f==0)
    printf("the entered number is not present in the array:");
    return 0;

}