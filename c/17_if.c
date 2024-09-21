#include <stdio.h>
#include <conio.h>
int main()
{
  int age;
  printf("please enter your age:");
  scanf("%d", &age);
  if (age <= 17)
  {
    printf("you are minor,so you may face some restrictions.");
  }

  printf("\nwelcome to our website.");
  getch();
  return 0;
}