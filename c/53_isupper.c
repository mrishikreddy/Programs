#include<stdio.h>
#include<ctype.h>
int main()
{ 
    int d;
    char c;
    printf("\nenter a alphabet to check whether it is upper or lower number:");
    scanf("%c",&c);
    d=isupper(c);
    if(d>0)
    printf("it is upper alphabet:");
    else
    printf("it is lower alphabet:");
    
    
    return 0;
}
