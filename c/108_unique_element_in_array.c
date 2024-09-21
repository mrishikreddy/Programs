#include<stdio.h>
int main()
{
    int size,A[1000],i,j,count=0,fcount=0;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    for(i=0;i<size;i++)
    {   
        count=0;
        for(j=0;j<size;j++)
            if(A[i]==A[j])
                count+=1;
        if(count==1)
            fcount+=1;
    }
    printf("The number of unique elements are: %d",fcount);
    return 0;
    
}