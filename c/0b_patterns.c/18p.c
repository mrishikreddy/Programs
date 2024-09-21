# include<stdio.h>
int main()
{
    int rows, cols,spaces,n;
    printf("enter a number:");
    scanf("%d", &n);
    for(rows=1; rows<=n;rows++)
    {
     for(spaces=1;spaces<=n-rows;spaces++)
     printf("  ");



     for(cols=1;cols<= rows;cols++)
     {
      printf("%c ",rows+64);
     }
    printf("\n"); 
    }
    return 0;
}