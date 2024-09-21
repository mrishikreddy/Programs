#include<stdio.h>
#include"65 scope of a variable part2.c"
int sum(int,int);
// static int a,b; // if you put static a,b cannot be accssed in different files 
int a,b;
int main()
{
    int c;
    a=10;
    b=20;
    c= sum(a,b);
    printf("%d",c);
    return 0;
}