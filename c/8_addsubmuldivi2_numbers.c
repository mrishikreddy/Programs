#include <stdio.h>
int main()
{
    float x, y;

    printf("ENTER THE FIRST NUMBER TO ADD:");
    scanf("%f", &x);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%f", &y);

    printf("x+y = %.2f", x + y);
    printf("\nx-y = %.2f", x - y);
    printf("\nx.y = %.2f", x * y);
    printf("\nx/y = %.2f", x / y);

    return 0;
}