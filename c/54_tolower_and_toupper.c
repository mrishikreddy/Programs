#include<stdio.h>
#include<ctype.h>
int main()
{
    char a,b,c;
    printf("enter a alphabet:");
    scanf("%c",&a);
    b=tolower(a);
    printf("its lowercase alphabet is:%c",b);
    c=toupper(a);
    printf("\nits uppercase alphabet is:%c",c);
    return 0;
}