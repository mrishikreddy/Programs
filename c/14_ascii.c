#include <stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("ENTER ANY CHARACTER:");
    scanf("%c", &ch);
    printf("CHARACTER ASCII NUMBER : %d", ch);
    printf("\nENTER NUMBER BETWEEN 0 AND 256 TO KNOW ITS CHARACTER:");
    scanf("%d", &ascii);
    printf("ASCII CHARACTER : %c", ascii);
    return 0;
}