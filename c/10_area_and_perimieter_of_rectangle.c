#include <stdio.h>
int main()
{
    float length, breadth, perimeter, area;
    printf("ENTER THE LENGTH OF RECTANGLE :");
    scanf("%f", &length);
    printf("ENTER THE BREADTH OF RECTANGLE :");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("THE PERIMETER F RECTANGLE = %.2f ", perimeter);
    printf("THE AREA OF RECTANGLE =%.2f", area);

    return 0;
}