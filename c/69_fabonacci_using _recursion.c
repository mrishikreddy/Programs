#include<stdio.h>
int fab(int);
int main()
{
    int n,res,i;
    printf("enter a number:");
    scanf("%d",&n);
    res=fab(n);
    printf("%dth term is:%d",n,res);
    printf("\n fabonacci series of %d terms are:",n);
    for(i=1;i<=n;i++)
    {
    res=fab(i);
    printf("%d ",res);
        
    }

    return 0;
}

int fab(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fab(n-1)+fab(n-2);
}