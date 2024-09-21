#include<stdio.h>
int main()
{
    int rows,cols,n,spaces;
    printf("enter a number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=rows-1;spaces++)
        printf(" "); 


       for(cols=1;cols<=n-rows+1;cols++)
       {
        printf("%d ",cols+rows-1);
       }

    printf("\n"); 
    }
    for(rows=2;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        printf(" "); 


       for(cols=1;cols<=rows;cols++)
       {
        printf("%d ",cols-rows+n);
       }

    printf("\n"); 
    }
    return 0;
}