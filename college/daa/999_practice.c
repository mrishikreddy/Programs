#include<stdio.h>

void radixsort(int arr[],int size,int exp)
{
    int count[10],out[size],i,index;

    for(i=0;i<size;i++)
    {
        index = arr[i]/exp;
        count[index%10]+=1;
    }

    for(i=1;i<10;i++)
    count[i] = count[i]+count[i-1];

    for(i=size-1;i>=0;i--)
    {
        index = arr[i]/exp;
        out[count[index%10]-1] = arr[i];
        count[index%10] -=1;
    }

    for(i=0;i<size;i++)
        arr[i] = out[i];

}


void rsort(int a[],int size)
{
    int maxy = 0,i=0,exp=1;
    for(i=0;i<size;i++)
        if(maxy<a[i])
            maxy = a[i];
    while(maxy/exp>=1)
    {
        radixsort(a,size,exp);
        exp*=10;
    }
}

int main()
{
    int i,size,a[10];
    printf("enter the number of elements: ");
    scanf("%d",&size);
    printf("enter the %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    rsort(a,size);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}