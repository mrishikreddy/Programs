#include <stdio.h>
#include <conio.h>
int main()
{
  int a;
  printf("please give your rating(out of 5):");
  scanf("%d", &a);
  if (a == 5)
  {
    printf("5 - execellent\nThank you for your valuble feedback");
  }
  else if (a == 4)
  {
    printf("4 - good\nThank you for your valuble feedback");
  }
  else if (a == 3)
  {
    printf("3 - average\nThank you for your valuble feedback");
  }
  else if (a == 2)
  {
    printf("2 - bad\nWe will improve our services\nThank you for your valuble feedback");
  }
  else if (a == 1)
  {
    printf("1 - worst\nWe will improve our services\nThank you for your valuble feedback");
  }
  else
  {
    printf("invalid rating");
  }
  getch();
  return 0;
}