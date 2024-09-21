#include<stdio.h>
int main()
{
    int n,r,t,i,sum,mul;
    printf("enter the number:");
    scanf("%d",&n);
   t=n;
   sum=1;
   while(t>0)
   {
    r = t % 10;
    mul=1;
    for(i=1;i<=r;i++)
    {
        mul=mul*i;
    }
    sum=sum+mul;
    t=t/10;
   }
   if(sum == n)
   printf("it is a strong number");
   else
   printf("it is not a strong number");
}