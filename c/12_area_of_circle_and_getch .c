#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
    float r;
    printf("ENTER THE RADIUS OF CIRCLE:");
    scanf("%f", &r);
    printf("AREA OF CIRCLE = %.2f", r * r * PI);
    printf("\nCIRCUMFERENCE OF CIRCLE = %.2f", 2 * r * PI);
    getch();
    return 0;
}