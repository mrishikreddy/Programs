#include <stdio.h>
int main()
{
    float i, p, t, r;
    printf("ENTER THE AMOUNT :");
    scanf("%f", &p);
    printf("ENTER THE RATE OF INTEREST :");
    scanf("%f", &r);
    printf("ENTER TIME (IN YEARS):");
    scanf("%f", &t);
    i = p * t * r / 100;
    printf("INTEREST = %.2f", i);
    printf("\nTOTAL AMOUNT=%.2f", i + p);
    return 0;
}