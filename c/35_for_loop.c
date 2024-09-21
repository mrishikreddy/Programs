#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d ", i);
    }
    
    int a,b,c,d,sum=0,e=0;
    printf("\nenter another number to get even and odd number details:");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        printf("%d ", b*2);
    }

    for(c=1;c<=a;c++)
    {
      sum=sum+(c*2);
    }
    printf("sum of %d even numbers = %d\n",a,sum);


    for(d=1;d<=a;d++)
    {
        printf("%d ", d*2-1);
    }
    for(d=1;d<=a;d++)
    {
      e=e+(d*2-1);
    }
    printf("sum of %d odd numbers = %d",a,e);
    
    return 0;


}