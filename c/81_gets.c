#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
  int a;
  double b;
  char str[200];
  scanf("%d",&a);
  scanf("%lf",&b);
 fgets(str,200,stdin);
  printf("%d\n",a+i);
  printf("%.1lf\n",b+d);
  strcat(s,str);
  


    return 0;
}