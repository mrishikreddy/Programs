#include <stdio.h>
int main()
{
    int a,b,max,lcm;
    printf("enter two numbers to know their lcm : ");
    //give space between two numbers to get them identified by compiler
    scanf("%d %d", &a, &b);
    max=(a>b) ? a : b ;
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    printf("lcm of %d and %d = %d", a, b, lcm);
    return 0;
}