#include<stdio.h>
#include<stdlib.h>
void add();

int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c,d;
    printf("enter the values of two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);
    printf("enter 1 if you want to caluclate again , enter 2 if you want to exit:");
    scanf("%d",&d);
    if(d==1)
    add();
    else
    exit(0);
}
