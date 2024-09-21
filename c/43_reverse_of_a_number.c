#include <stdio.h>
int main ()
{
    int n, remainder, reverse = 0;
    printf("enter a number to print its reverse number:");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;  
    }
    printf("reverse number is %d", reverse);
    return 0;
}