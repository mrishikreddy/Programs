// insertion sort

#include<stdio.h>
int main()
{
    int arr[10],i,j,temp,size,key,ind;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=1;i<size;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>-1 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }

    printf("The sorted array is: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}