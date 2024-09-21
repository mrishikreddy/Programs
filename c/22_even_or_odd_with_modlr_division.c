#include <stdio.h>
int main()
{
   // to find even or odd number using modular division
   int a, result;
   printf("enter a number:");
   scanf("%d", &a);
   result = a % 2;
   if (result == 1)
   {
      printf("%d is odd number", a);
   }
   else
   {
      printf("%d is even number", a);
   }
   return 0;
}