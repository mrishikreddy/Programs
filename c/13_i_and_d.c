#include <stdio.h>
int main()
{
    int dec, oct, hex;
    printf("Enter the Decimal number system number:");
    scanf("%i", &dec);
    printf("Enter the Octal number system number:");
    scanf("%i", &oct);
    printf("Enter the Hexadecimal number system number:");
    scanf("%i", &hex);
    printf("\nDecimal number system number:%d", dec);
    printf("\nOctagonal number system number:%o", oct);
    printf("\nHexagonal number system number:%x", hex);
    return 0;
}
