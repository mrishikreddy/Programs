#include <stdio.h>
int main()
{
    int a,i=1,b=1;
    printf("enter a number:");
    scanf("%d", &a);
    printf("even numbers:\n");
    while(i<=a)
    { if(i%2 == 0)
        {printf("%d ",i);}
        i++; }
    printf("\nodd numbers:\n");
    while(b <= a)
    {printf("%d ",b);
    b+=2;
    }
    
    return 0;    

}