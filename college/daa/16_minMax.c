#include<stdio.h>
struct pair{
    int min,max;
};

struct pair min_max(int arr[],int low,int high)
{
    struct pair minMax,mml,mmr;
    if(low==high)
    {
        minMax.min = arr[low];
        minMax.max = arr[low];
        return minMax;
    }
    else if(low+1==high)
    {
        if(arr[low]<arr[high])
        {
            minMax.min = arr[low];
            minMax.max = arr[high];
        }
        else
        {
            minMax.max = arr[low];
            minMax.min = arr[high];
        }
        return minMax;
    }
    else
    {
        int mid = (low+high)/2;
        mml = min_max(arr,low,mid);
        mmr = min_max(arr,mid+1,high);
        if(mml.min<mmr.min)
        {
            minMax.min = mml.min;
        }
        else
        {
            minMax.min = mmr.min;
        }

        if(mml.max>mmr.max)
        {
            minMax.max = mml.max;
        }
        else
        {
            minMax.max = mmr.max;
        }
        return minMax;
    }
}

int main()
{
    int arr[50],i,size;
    struct pair minMax;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the values of %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    minMax = min_max(arr,0,size-1);
    printf("Minimum and Maximum Values are: %d %d",minMax.min,minMax.max);
    return 0;
}