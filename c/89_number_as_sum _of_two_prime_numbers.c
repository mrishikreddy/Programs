#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}

void prime(int n)
{
    int i,j,a[100],count,h=0;
    for(i=1;i<=n;i++)
    {count=0;
    for(j=1;j<=i;j++)
    if(i%j==0)
    count++;
    if(count==2)
    {a[h]=i;h++;}
    }
    count=0;
    for(i=0;i<h;i++)
    for(j=i+1;j<h;j++)
    {
        if(a[i]+a[j]==n)
        {printf("%d+%d=%d\n",a[i],a[j],n);
        count++;}
    }
    if(count==0)
    printf("the number cannot be expressed as sum of two prime numbers");
}