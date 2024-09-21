#include<stdio.h>
//int a=1;
void fun1();
void fun2();
int main()
{
    fun1();
    fun1();

    fun2();
    fun2();

    return 0;
}

void fun1()
{
    static int a=1;
    printf("funtion1 is called for %d time\n",a);
    a++;
}

void fun2()
{
    static int a=1;
    printf("function2 is called for %d time\n",a);
    a++;
}