#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    printf ("enter a number to know its some trignometric properties and log values:");
    scanf("%f",&a);
    b=sin(a);
    c=cos(a);
    d=tan(a);
    e=log(a);
    f=log10(a);
    printf("sin(%f)=%f\ncos(%f)=%f\ntan(%f)=%f\nloge(%f)=%f\nlog10(%f)=%f",a,b,a,c,a,d,a,e,a,f);
    return 0;
    
}