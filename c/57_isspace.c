#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    int b;
    printf("enter space to check whether it is space or not:");
    scanf("%c",&a);
    b=isspace(a);
    if(b>0)
    printf("you entered space");
    else
    printf("did not entered space");

    return 0;
}