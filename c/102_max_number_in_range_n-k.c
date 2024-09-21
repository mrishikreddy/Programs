#include<stdio.h>
int main()
{
   int a[30],i,n,j,max=0,k;
   printf("enter the size of array:");
   scanf("%d",&n);
   printf("enter %d elements:",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter a number(index value):");
   scanf("%d",&k);
   for(i=k;i<n;i++)
   {for(j=i;j<n;j++)
    if(max<a[j])
    max=a[j];
    printf("the maximum number in the interval %d to %d is:%d\n",i,n,max);
   }
   return 0;
}