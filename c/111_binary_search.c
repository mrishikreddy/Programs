#include<stdio.h>
int main()
{
    int size,i,sele,mid,high,low,flag=0,a[20];
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter %d elements",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("enter a number to search:");
    scanf("%d",&sele);
    low=0;high=size;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==sele)
        {
            flag+=1;
            printf("element found at index %d",mid);
            break;
        }
        else if(a[mid]<sele)
        low=mid+1;
        else
        high=mid-1;
    }
    if(flag==0)
    printf("element not found");
    return 0;
}