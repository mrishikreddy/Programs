#include<stdio.h>
#define square n*n
#define maths
int main()
{
    int n,a=2;
    printf("enter a number to know its square:");
    scanf("%d",&n);
    #ifndef APPLE
    printf("%d",square);
    #endif
    #if(a==1)
    printf("\nvalue of a is 1");
    #elif(a==3)
    printf("\nvalue of a is 3");
    #else
    printf("\nthe value of a is 2");
    #endif

    #ifndef maths
    #error maths is not defined
    #endif
     
    #undef maths
    #ifndef maths
    printf("\nmaths is succefully undefined");
    #endif
    return 0;

}