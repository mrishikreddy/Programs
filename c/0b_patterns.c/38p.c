#include<stdio.h>
int main()
{
    int rows,cols,n,spaces;
    printf("enter a number:");
    scanf("%d",&n);
    for(rows=1;rows<=5;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        printf(" ");
        for(cols=1;cols<=rows;cols++)
        {
            if(cols==1 || cols==rows)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    for(rows=1;rows<n;rows++)
    {
        for(spaces=1;spaces<=rows;spaces++)
        printf(" ");
        for(cols=1;cols<=n-rows;cols++)
        {
            if(cols==1 || cols==n-rows)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}