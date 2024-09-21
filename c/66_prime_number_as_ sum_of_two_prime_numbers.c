#include<stdio.h>
int main()
{
    int arr[1000],i,j,k=0,n,count=0;
    printf("enter a number to express it as a prime number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    count=0;    
    for(j=1;j<=i;j++)
    {   
        if(i%j==0)
        count++;
    }
    
    if(count==2)
    {arr[k]=i;k++;}
   
    }

    printf("prime numbers upto %d are:",n);
    for(i=0;i<k;i++)
    printf("%d ",arr[i]);

    printf("\nprime number as sum of two numbers is:");
    for(i=0;i<k;i++)
    for(j=i+1;j<k;j++)
    {
        if(arr[i]+arr[j]==n)
        printf("%d + %d = %d\n",arr[i],arr[j],n);
    }
    
 return 0;
   
}