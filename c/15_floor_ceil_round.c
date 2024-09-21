#include <stdio.h>
#include <math.h>
int main()
{
    float number, f, c, r;
    printf("ENTER ANY DECIMAL NUMBER:");
    scanf("%f", &number);
    f = floor(number);
    c = ceil(number);
    r = round(number);
    printf("FLOOR NUMBER:%.0f", f);
    printf("\nCEIL NUMBER:%.0f", c);
    printf("\nROUND NUMBER:%.0f", r);
    getch();
    return 0;
}
