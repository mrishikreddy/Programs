#include <stdio.h>

int main()
{
  int a, b;

  printf("enter 1 for tiffins\nenter 2 for fast food:");
  scanf("%d", &a);

  if (a == 1)
  {
    printf("enter 1 to order dosa\nenter 2 to order idli\nenter 3 to order puri:");
    scanf("%d", &b);
    if (b == 1)
    {
      printf("you ordered dosa");
    }
    else if (b == 2)
    {
      printf("you ordered idli");
    }
    else if (b == 3)
    {
      printf("you ordered puri");
    }
    else
    {
      printf("invalid response");
    }
  }
  else if (a == 2)
  {
    printf("enter 1 to order manchuria\nenter 2 to order noodles\nenter 3 to order fried rice");
    scanf("%d", &b);
    if (b == 1)
    {
      printf("you ordered manchuria");
    }
    else if (b == 2)
    {
      printf("you ordered noodles");
    }
    else if (b == 3)
    {
      printf("you ordered fried rice");
    }
    else
    {
      printf("invalid response");
    }
  }
  else
  {
    printf("invalid response , close the window and try again");
  }

  return 0;
}