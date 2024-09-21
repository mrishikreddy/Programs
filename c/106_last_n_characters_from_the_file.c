#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch='A';
  int n;
  FILE*f1;
  f1=fopen("C33.txt","w");
  printf("enter the contents into the file:");
  while(ch!=EOF)
  {
    ch=getchar();
    putc(ch,f1);
  }
  fclose(f1);
  f1=fopen("C33.txt","r");
  printf("enter the number:");
  scanf("%d",&n);
  fseek(f1,-n-3,SEEK_END);
  ch='A';
  while(ch!=EOF)
  {
    ch=fgetc(f1);
    printf("%c",ch);
  }
  return 0;
}