#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers two know the greatest among them:");
    /*note:remember while entering two numbers space must be given between one number 
    another number*/
    scanf("%d %d", &a, &b);
    c=(a>b)?a:b;
    printf("the greatest number is : %d",c);

    return 0;
}