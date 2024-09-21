#include<stdio.h>
int sum(int);
int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=sum(n);
    printf("the sum is %d",result);
    return 0;
}

int sum(int n)
{
    int rem;
    if(n!=0)
    {
      rem=n%10;
      n=n/10;
      return rem+sum(n);
    }
    else
    return 0;

}