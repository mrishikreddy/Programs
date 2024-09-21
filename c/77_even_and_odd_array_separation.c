#include<stdio.h>
int main()
{
    int size,arr[20],i,e[20],o[20],j,k;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the elments:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nelements are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


   j=0;
   k=0;
    for(i=0;i<size;i++)
    {
       if(arr[i]%2 == 0)
       {
        e[j]=arr[i];
        j++;
       }
       else
       {
       o[k]=arr[i];
        k++;

       }
    }
    printf("\neven elements are: \n");
    for(i=0;i<j;i++)
    {
        printf("%d ",e[i]);
    }
     printf("\nodd elements are:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",o[i]);
    }
    




    return 0;



}