#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int*ptr,n,i,max,min;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",ptr++);
    ptr-=n;max=*ptr;min=*ptr;

    for(i=0;i<n;i++)
    {if(max<*(ptr+i))
    max=*(ptr+i);
    if(min>*(ptr+i))
    min=*(ptr+i);
    }

    for(i=0;i<n;i++)
    {if(max==*(ptr+i))
    *(ptr+i)=sqrt(*(ptr+i));
    if(min==*(ptr+i))
    *(ptr+i)=pow(*(ptr+i),2);
    }

    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));
}