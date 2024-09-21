# include<stdio.h>
int main()
{
    int rows, cols, n;
    printf("enter a number:");
    scanf("%d", &n);
    for(rows=1;rows<=n;rows++)
    {
     for(cols=1;cols<=rows;cols++)
     {
      printf("%d ",rows);
     }
    printf("\n"); 
    }
    return 0;
}