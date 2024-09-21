#include <stdio.h>
int main()
{
   int i, j;
   printf("enter the value of i:");
   scanf("%d", &i);
   printf("enter the value of j:");
   scanf("%d", &j);

   if (i > 10 || j > 50)
   {
      printf("condition is true");
   }
   else
   {
      printf("conditon is false");
   }
   int c, d;
   printf("\nsecond condition:\nenter the value of c:");
   scanf("%d", &c);
   printf("enter the value of d:");
   scanf("%d", &d);

   if (c > d && c > 10)
   {
      printf("second condition is true");
   }
   else
   {
      printf("second condition is false");
   }

   return 0;
}