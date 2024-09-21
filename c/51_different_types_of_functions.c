#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,base,power,c,n,m;
    float b,o,p;
    printf("enter a number to know its square root:");
    scanf("%d",&a);
    b=sqrt(a);
    printf("square root of %d is %f",a,b);
    printf("\nenter base and power to find power of a number:");
    scanf("%d%d",&base,&power);
    c= pow(base,power);
    printf("the %d power %d is %d",base,power,c);
    printf("\nenter a integer to know its absolute value:");
    scanf("%d",&n);
    m=abs(n);
    printf("the a bsolute value of %d is %d",n,m);
    printf("\nenter a float number to know its absolute value:");
    scanf("%f",&o);
    p=fabs(o);
    printf("the absolute value of %f is %f",o,p);

    return 0;
}