#include<stdio.h>
int main()
{
    int arr[10],i,j,temp,size,flag;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }

        if(flag==0)
        break;
    }

    printf("The sorted array is: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}