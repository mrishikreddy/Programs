
// writing varaibles and format specifiers
#include <stdio.h>
int main()
{
    int a = 27;
    float b = 23.476;
    double c = 458.673524258325482364;
    char d = '@';

    printf("%d\n", a);
    printf("%.3f\n", b);
    printf("%.7lf\n", c);
    printf("%c\n", d);
    return 0;
}