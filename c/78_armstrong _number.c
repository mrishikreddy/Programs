#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
    int n,d;
    printf("enter a number:");
    scanf("%d",&n);
    d = arm(n);
    if (d == n)
    printf("It is a armstrong number:");
    else
    printf("It is not a armstrong number:");
    return 0;

}

int arm(int n)
{
    int t,r,sum=0,dig=0;
    t=n;
    while(n!=0)
    { n/=10;
      dig++;
    }
    while(t>0)
    {
        r=t%10;
        sum=sum+pow(r,dig);
        t=t/10;
    }
    return sum;
}