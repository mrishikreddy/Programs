#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("enter the string:");
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    if(strcmp(s1,s2))
    printf("the entered string is not palindrome");
    else
    printf("the entered string is a palindrome");

    /*  to do without functions
    char s1[30],s2[30],i=0,j=0,count=0,len=0;
    char ch='z';
    printf("enter a string:");
    while(ch!='\n')
    {
        scanf("%c",&ch);
        s1[i]=ch;
        i++;
    }
    len = --i;

    for(i=len-1;i>=0;i--)
    { 
        s2[j]=s1[i];
        j++;
    }
    s2[j] = '\0';

    for(i=0;i<len;i++)
    if(s1[i]==s2[i])
    count++;

    if(count==len)
    printf("entered string is a plaindrome");
    else
    printf("entered string is not a palindrome");*/

    return 0;
}