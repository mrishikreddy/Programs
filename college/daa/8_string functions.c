#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[20],s2[20];
    printf("enter first string:");
    scanf("%s",s1);
    printf("length of string: %lu",strlen(s1));
    strcpy(s2,s1);
    printf("\nstring copied to s2 from s1:%s",s2);
    printf("\nstring comaprision result of s1 and s2:%d",strcmp(s1,s2));
    printf("\nconcatenation of two strings s1 and s2:%s",strcat(s1,s2));
    return 0;
}