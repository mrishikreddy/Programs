#include <stdio.h>
int main()
{
    int a;
    
    for(a=1;a<=5;a++)
    {
        if(a==3)
        {
            break;
        }
        printf("%d ", a);
        }
    printf("\n");
    int b;
    for(b=1;b<=5;b++)
    {
        if(b==3)
        {
         continue;
        }
        printf("%d ", b);
    }
    return 0;
}