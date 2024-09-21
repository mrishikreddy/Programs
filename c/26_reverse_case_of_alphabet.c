#include <stdio.h>
int main()
{
    char a;
    printf ("enter the alphabet:");
    scanf("%c", &a);
    if (a >='a' && a <= 'z')
    {
        printf("the reverse case of given alphabet is:%c", a-32);
    }
    else if (a >='A' && a <='Z')
    {
        printf("the reverse case of given alphabet is:%c", a+32);
    }
    return 0;
}