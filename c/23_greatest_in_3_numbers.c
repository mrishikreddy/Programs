#include <stdio.h>
int main()
{
    printf("to know which number is greatest among three numbers\n");
    int a, b, c;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    printf("enter the third number:");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("%d is the greatest number", a);
    else if (b > c)
        printf("%d is the greatest number", b);
    else
        printf("%d is the greatest number", c);
    return 0;
}