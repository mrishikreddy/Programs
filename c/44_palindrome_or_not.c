#include <stdio.h>
int main ()
{
    int n,n1, remainder, reverse = 0;
    printf("enter a number to print its reverse number:");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;  
    }
    if (n1 == reverse )
    {
        printf("%d is a palindrome", n1);
    }
    else
    {
        printf("%d is not a palidrome", n1);
    }
    return 0;
}