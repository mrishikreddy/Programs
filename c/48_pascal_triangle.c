#include<stdio.h>
int fam(int a);
int main()
{
    int n,cols,rows,spaces,num;
    printf("enter a number:");
    scanf("%d",&n);
   for(rows=0;rows<n;rows++)
   {
    for(spaces=0;spaces<n-rows;spaces++)
    {
        printf(" ");
    }
    for(cols=0;cols<=rows;cols++)
    {
        
        
        num=fam(rows)/(fam(rows-cols)*fam(cols));
        printf("%d ",num);
    }
    printf("\n");
   }
   return 0;
}

int fam(int a)
{
    int t=1;
    while(a>0)
    {
        t=t*a;
        a--;
    }
    return t;
}