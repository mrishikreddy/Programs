#include <stdio.h>
int main()
{
    int a,b,sum=1;
    printf("enter a number:");
    scanf("%d", &b);
    printf("factorial of %d = ", b);
    for(a=1;b>=a;b--)
    {
        sum=sum*b;
    }
    printf(" %d", sum);
    return 0;
}