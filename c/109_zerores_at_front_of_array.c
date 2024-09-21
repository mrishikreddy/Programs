#include<stdio.h>
int main()
{
    int arr[20],i,j,size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        if(arr[i]==0)
        {
            j = i-1;
            while(j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]=0;
        }
    printf("array after shiting zeros to front is : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}