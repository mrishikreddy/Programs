#include <stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=6;
    printf("before increment and decrement:a=%d b=%d\n", a,b);
    c= ++a + b--;
    printf("after increment and decrement:a=%d b=%d c=%d", a,b,c);
    return 0;

}