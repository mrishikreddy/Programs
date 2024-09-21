#include<stdio.h>
int main()
{
    int size,i,sele,mid,high,low;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    scanf("%d",&sele);
    if(a[size-1]<sele)
    printf("-1");
    else
    {
    low=0;high=size;
    while(low<=high)
    {
        mid=low+((high-low)/(a[high]-a[low]))*(sele-a[low]);
        if(a[mid]==sele)
        {
           
            printf("%d",mid);
            break;
        }
        else if(a[mid]<sele)
        low=mid+1;
        else
        high=mid-1;
    }}
    
   
    return 0;
}