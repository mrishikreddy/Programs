#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("enter a number:");
    scanf("%d",&n);
    printf("prime numbers upto %d are:",n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count==2)
        printf("%d",i);
    }
    return 0;
}
