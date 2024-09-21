#include<stdio.h>
#define SIZE 11
int main()
{
    int a[SIZE],i,total=0;
    printf("enter scores of %d players",SIZE);
    for(i=0;i<SIZE;i++)
    scanf("%d",&a[i]);
    for(i=0;i<SIZE;i++)
    total+=a[i];
    printf("team total score is : %d",total);
    return 0;
}