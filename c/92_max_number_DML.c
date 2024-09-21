#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr,n,i,max;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",ptr++);
    ptr-=n;max=*ptr;
    for(i=0;i<n;i++)
    if(max<*(ptr+i))
    max=*(ptr+i);
    printf("the maximum value is:%d",max);
}