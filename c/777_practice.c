#include <stdio.h>
void minmax(int arr[],int low,int high,int *min,int *max)
{
    if (low==high)
    {
        if(*min > arr[0]) *min = arr[0];
        if(*max < arr[0]) *max = arr[0];
    }
    else if(high==low+1)
    {
        if(arr[low])
    }

    else
    {
        int mid = (low+high)/2;
        minmax(arr,low,mid,min,max);
        minmax(arr,mid+1,high,min,max);
    }
}

int main()
{
    int arr[] = {100, 45, 87, 10, 64, 92, 33};
    int size  = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];
    
    minmax(arr,0,size-1,&min,&max)
    printf("min: ",*min);
    printf("max: ",*max);
}