#include<stdio.h>
int main()
{
    int a;
    printf("type 1 to enter\ntype 2 to quit:");
    scanf("%d",&a);
    if(a == 1)
    {
        goto beta;
    }
    else if(a == 2)
    {
        goto teta;
    }
    else
    {
      printf("invalid input");
    }
    
    beta :
           { printf("welcome to goto statement\n");
            printf("this is the demonstration of goto statement");
           }
    teta :
            printf("thank you for visiting");


    return 0;           


}