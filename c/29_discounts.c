#include <stdio.h>
int main()
{
    float a,d;
    printf("enter the price:");
    scanf("%f", &a);
    if(a>=10000)
    {
        d=a*30/1000;
        printf("discount=%.2f\ntotal amount to be paid=%.2f", d, a-d);
    }
    else if(a>=5000)
    {
        d=a*20/1000;
        printf("discount=%.2f\ntotal amount to be paid=%.2f", d, a-d);
    }
    else if(a>=1000)
    {
        d=a*10/1000;
        printf("discount=%.2f\ntotal amount to be paid=%.2f", d, a-d);
    }
    else 
    {
        d=0;
        printf("discount=%.2f\ntotal amount to be paid=%.2f", d, a-d);
    }
    return 0;

    
    
    
    
    
}  