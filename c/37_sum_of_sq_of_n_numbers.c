#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("enter a number:");
    scanf("%d", &b);
    for(a = 1; a <= b ; a++)
    {
     sum = sum+(a*a);
    }
    printf("sum of squares of n natural numbers = %d", sum);
    return 0;
}
