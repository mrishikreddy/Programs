#include<stdio.h>
int main()
{
    int n,i=1,j,b=1,count;
    printf("enter a number:");
    scanf("%d",&n);
    printf(" %d prime numbers are:",n);
    while(1)
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
        {printf("%d ",i);b++;}
        i++;
        if(b==n)
        break;
        
    }
   return 0;
    }
    

