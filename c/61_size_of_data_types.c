#include<stdio.h>
int main()
{
    printf("size of signed char or char = %d\n", sizeof(signed char));
    printf("size of unsigned char       = %d\n", sizeof(unsigned char));
    printf("size of short int           = %d\n", sizeof(short int));
    printf("size of unsigned short int  = %d\n", sizeof(unsigned short int));
    printf("size of int                 = %d\n", sizeof(int));
    printf("size of unsigned int        = %d\n", sizeof(unsigned int));
    printf("size of long int            = %d\n", sizeof(long int));
    printf("size of unsigned long int   = %d\n", sizeof(unsigned long int));
    printf("size of float               = %d\n", sizeof(float));
    printf("size of double              = %d\n", sizeof(double));
    printf("size of long double         = %d\n", sizeof(long double));
    return 0;
}