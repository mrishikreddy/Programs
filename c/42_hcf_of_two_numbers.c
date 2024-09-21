#include <stdio.h>
int main()
{
    int a ,b, min, hcf, i;
    printf("enter two numbers to know their hcf:");
    scanf("%d %d", &a, &b);
    min = (a>b)?b:a;
    for(i=1;i<=min;i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf=i;
        }
    }
    printf("hcf of %d and %d = %d",a , b, hcf);
    return 0;
}    