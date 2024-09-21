#include<stdio.h>
#include<ctype.h>
int main()
{
    int b;
    char a;
    printf("enter a alphabet to check whether it is upper or lower number:");
    scanf("%c",&a);
    b=islower(a);
    if(b>0)
    printf("it is lower alphabet:");
    else
    printf("it is upper alphabet:");

     
    return 0;
}