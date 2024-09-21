# include<stdio.h>
int main()
{
    int rows, cols,spaces,n;
    printf("enter a number:");
    scanf("%d", &n);
    for(rows=1; rows<=n;rows++)
    {
     for(spaces=0;spaces<n-rows;spaces++)
     printf(" ");



     for(cols=1;cols<=rows;cols++)
     {
      printf("%d ",cols);
     }
    printf("\n"); 
    }
    return 0;
}