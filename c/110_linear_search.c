#include<stdio.h>
int main()
{
    int a[30],ele,size,i,flag=0;
    printf("enter the size of array:");
    scanf("%d",&size);
    if((size<1)||(size>30))
    printf("entered size is not available");
    else
    {
    printf("enter %d elements:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("enter a element to search:");
    scanf("%d",&ele);
    for(i=0;i<size;i++)
    if(a[i]==ele)
    {printf("%d found at position %d",ele,i);
    flag++;
    break;}
    if(flag==0)
    printf("%d is not found in array",ele);
    }
    return 0;
}