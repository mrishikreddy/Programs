# include<stdio.h>
int main()
{
    int rows, cols,spaces,n;
    printf("enter a number:");
    scanf("%d", &n);
    for(rows=1; rows<=n;rows++)
    {
     for(spaces=0;spaces<rows-1;spaces++)
     printf(" ");



     for(cols=1;cols<=n-rows+1;cols++)
     {
      printf("%c ",cols+64);
     }
    printf("\n"); 
    }
    return 0;
}