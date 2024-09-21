#include<stdio.h>
void rev(char*);
int main()
{
    char*p;
    char str[20];
    p=str;
    printf("enter the string:");
    gets(str);
    rev(p);
    return 0;
}

void rev(char*p)
{
    int i=0,j=0;
    char str[20];
    while(*(p+i)!='\0')
    i++;
    for(--i;i>=0;i--)
    {
        str[j]=*(p+i);
        j++;
    }
    str[j]='\0';
    printf("%s",str);
}