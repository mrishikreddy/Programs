#include<stdio.h>
int main()
{
    int a[20],b[10],i,j,as,bs,count=0,elecount=0;
    printf("enter the size of main array:");
    scanf("%d",&as);
    printf("enter %d elements:",as);
    for(i=0;i<as;i++)
    scanf("%d",&a[i]);
    printf("enter the size of sub array:");
    scanf("%d",&bs);
    printf("enter %d elements:",bs);
    for(i=0;i<bs;i++)
    scanf("%d",&b[i]);
    for(i=0;i<bs;i++)
    {
        count=0;
        for(j=0;j<as;j++)
        if(b[i]==a[j])
        count++;
        if(count>0)
        elecount++;
    } 
    if(elecount==bs)
    printf("sub array is subset of main array");
    else
    printf("sub array is not subset of main array");
    return 0;
}