#include<stdio.h>
#include<ctype.h>
int main()
{
    int a;
    char b;
    printf("enter a aphabet to check whether it is or not:");
    scanf("%c",&b);
    a=isalpha(b);
    if(a==0)
    printf("it is not an alphabet");
    else
    printf("it is alphabet");
    return 0;
}