#include <stdio.h>
int main()
{
    int r;
    printf("enter rating:");
    scanf("%d", &r);
    switch(r)
    {
        case 1:printf("worst");break;
        case 2:printf("bad");break;
        case 3:printf("average");break;
        case 4:printf("good");break;
        case 5:printf("execellent");break; 
        default :printf("invalid rating");break;                                  
    }
    return 0;
    
}