#include<stdio.h>
int main()
{ 
    int n,a=0,b=1,t,i,nth;
    printf("enter a number:");
    scanf("%d",&n);
    printf("fabonacci series %d numbers:0 ",n);
    for(i=1;i<n;i++)
    {
      
        printf("%d ",b);
        t=a+b;
        a=b;
        b=t;
    }
    nth=a;
    printf("\nfabnocaii series upto %d:0 ",n);
    a=0;b=1;
    while(b<n)
    {
        printf("%d ",b);
        t=a+b;
        a=b;
        b=t;
    }
    printf("\nfabnocci series %dth term:%d",n,nth);
    return 0;
}