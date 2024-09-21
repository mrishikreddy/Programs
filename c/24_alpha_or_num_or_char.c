#include <stdio.h>
int main()
{
    char c;
    printf("enter the character:");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
        printf("it is a number");
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("it is a alphabet");
    else
        printf("it is a special character");
    return 0;
}