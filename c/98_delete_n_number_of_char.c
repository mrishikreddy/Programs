#include<stdio.h>
#include<string.h>
int main()
{
  char s[30],ns[30];
  int i,j,n,p,mlen;
  printf("enter the string:");
  scanf("%s",s);
  puts("enter the position:");
  scanf("%d",&p);
  puts("enter the number of characters to be deleted:");
  scanf("%d",&n);
  mlen=strlen(s);
  for(i=0;i<p;i++)
  ns[i]=s[i];
  i--;
  for(j=0;j<mlen-n;j++,i++)
  ns[i]=s[j+n+p-1];

  puts(ns);

  return 0;
}