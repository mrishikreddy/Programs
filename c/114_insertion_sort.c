#include<stdio.h>
int main()
{
    int size,i,j,key;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements:");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<size;i++)
    { key=arr[i];
      j=i-1;
      while(j >=0 && arr[j]>key)
      {
        arr[j+1]=arr[j];
        j-=1;
      }
      arr[j+1]=key;
    }
    printf("the sorted order of elements are:");
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
  return 0;
}