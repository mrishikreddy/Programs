#include<stdio.h>
#include<math.h>
int size;
void countSort(int arr[size],int expp)
{
    int out[100] = {0}, count[10] = {0},i,index;
    for(i=0;i<size;i++)
    {
        index = arr[i]/expp;
        count[index%10]+=1;
    }
    
    for(i=1;i<10;i++)
        count[i]+=count[i-1];
    i = size-1;
    while(i>=0)
    {
        index = arr[i]/expp;
        out[count[index%10]-1]=arr[i];
        count[index%10]-=1;
        i-=1;
    }
    for(i=0;i<size;i++)
        arr[i] = out[i];
    
}

void radixSort(int arr[size])
{
   int max=0,i;
   for(i=0;i<size;i++)
   {
       if(max<arr[i])
       max = arr[i];
   }
   int expp = 1;
   while(max/expp>=1)
   {
       countSort(arr,expp);
       expp += 10;
   }
}

int main()
{
    int arr[20],i;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    radixSort(arr);
    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);
    
    
    
}