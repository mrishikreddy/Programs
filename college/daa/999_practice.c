//minmax 
#include<stdio.h>
struct pair{
    int min,max;
};
struct pair minMaxFinder(int arr[],int low,int high);

struct pair minMaxFinder(int arr[],int low,int high)
{
    struct pair min_max,mml,mmr;
    if(low==high)
    {
        min_max.min = arr[low];
        min_max.max = arr[high];
    }
    else if(low+1==high)
    {
        if(arr[low]<arr[high])
        {
            min_max.min = arr[low];
            min_max.max = arr[high];
        }
        else
        {
            min_max.max = arr[low];
            min_max.min = arr[high];
        }
    }
    else
    {
        int mid = (low+high)/2;
        mml = minMaxFinder(arr,low,mid);
        mmr = minMaxFinder(arr,mid+1,high);
        if(mml.min<mmr.min)
            min_max.min = mml.min;
        else
            min_max.min = mmr.min;

        if(mml.max>mmr.max)
            min_max.max = mml.max;
        else
            min_max.max = mmr.max;
    }

    return min_max;
}

int main()
{
    int arr[50],i,size;
    struct pair min_max;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the values of %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    min_max = minMaxFinder(arr,0,size-1);
    printf("the minimum value is: %d\n",min_max.min);
    printf("the maximum value is: %d\n",min_max.max);
    return 0;
}