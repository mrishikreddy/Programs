#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("signed char or char :  %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("signed char or char :  0 to %d\n",UCHAR_MAX);

    printf("short int           :  %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short int  :  0 to %d\n",USHRT_MAX);
    printf("int                 :  %d to %d\n",INT_MIN,INT_MAX);
    printf("unsigned int        :  0 to %u\n",UINT_MAX);
    printf("long int            :  %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned long int   :  0 to %lu\n",ULONG_MAX);

    printf("float               :  %g to %g\n",FLT_MIN,FLT_MAX);
    printf("double              :  %g to %g\n",DBL_MIN,DBL_MAX);



}