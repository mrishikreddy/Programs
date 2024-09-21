2#include<stdio.h>
void gcd(int,int);
int main()
{
    int a,b,big,small;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    big=(a>b)?a:b;
    small=(a<b)?a:b;
    gcd(big,small);
    return 0;
}

void gcd(int big,int small)
{
    int rem;
    rem = big % small;
    if(rem!=0)
    {
        big=small;
        small=rem;
        gcd(big,small);
    }
    else
    printf("gcd is %d",small);
}