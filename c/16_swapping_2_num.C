#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,t,c,d;
    a=10;
    b=40;
    printf("BEFORE SWAPPING: a=%d b=%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nAFTER SWAPPING:a=%d b=%d",a,b);
    // second method by using mathematical operations
    printf("\nsecond method:");
    c=10;
    d=40;
    printf("\nBEFORE SWAPPING:c=%d d=%d",c,d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("\nAFTER SWAPPING:c=%d d=%d",c,d);
    getch();
    return 0;
}