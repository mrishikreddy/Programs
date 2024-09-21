#include <stdio.h>
int main()
{
    printf("modular division of two numbers\n");
    int a, b;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    printf("a%%b = %d", a % b);
    return 0;
}