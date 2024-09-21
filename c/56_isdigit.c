#include<stdio.h>
#include<ctype.h>
int main()
{
    char b; 
    int a;
    printf("enter a digit to check whether it is number or not:");
    scanf("%c",&b);
    a=isdigit(b);
    if(a==0)
    printf("it is not an digit");
    else
    printf("it is digit");
    return 0;

    

}