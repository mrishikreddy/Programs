# include<stdio.h>
int main()
{
    int rows, cols, n;
    printf("enter a number:");
    scanf("%d", &n);
    for(rows=1; rows<=n;rows++)
    {
     for(cols=1;cols <= n-rows+1;cols++)
     {
      printf("%d ",n-rows+1);
     }
    printf("\n"); 
    }
    return 0;
}