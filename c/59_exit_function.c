#include<stdio.h>
#include<stdlib.h>
void add();
void userchoice();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("enter the values of two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);
    userchoice();
}
void userchoice()
{
    int a;
    printf("if you want to caluclate again press 1 to exit press 2 :");
    scanf("%d",&a);
    if(a==1)
    add();
    else
    exit(0);

}