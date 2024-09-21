#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char d;
    printf("enter the two operands:");
    scanf("%d%d",&a,&b);
    printf("enter the oprand:");
     d = getch();
    switch(d)
    {
        case '+' : printf("%d + %d = %d",a,b,a+b);break;
        case '-' : printf("%d - %d = %d",a,b,a-b);break;
        case '*' : printf("%d x %d = %d",a,b,a*b);break;
        case '/' : printf("%d / %d = %d",a,b,a/b);break;
        case '%' : printf("%d %% %d = %d",a,b,a%b);break;
        default : printf("invalid input");break;
    }
    return 0;
}