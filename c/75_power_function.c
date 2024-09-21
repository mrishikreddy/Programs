#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  printf("enter the base:");
  scanf("%d",&a);
  printf("enter the power:");
  scanf("%d",&b);
  c = pow(a,b);
  printf("%d power %d = %d",a,b,c);



    return 0;
}