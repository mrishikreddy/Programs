#include<stdio.h>
int main()
{
    int arr[20],i,brr[20],crr[20],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter %d elements of matrix a :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter %d elements of matrix b :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        crr[i]=arr[i]*brr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
return 0;

}