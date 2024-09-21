#include<stdio.h>
#define A 10
#define B 22.32423
#define C 'A'
#define D "hello world"
int main()
{
    const int x=21;
    const float y=42.48723;
    const char z ='A';

    printf("A=%d\n",A);
    printf("B=%f\n",B);
    printf("C=%c\n",C);
    printf("D=%s\n",D);
    printf("x=%d\n",x);
    printf("y=%f\n",y);
    printf("z=%c\n",z);
    return 0;

}