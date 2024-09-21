#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    int n,i=0,mlen,sublen;
    printf("enter the string:");
    gets(s);
    printf("enter the position:");
    scanf("%d",&n);
    n=n-1;
    printf("enter the sub string:");
    scanf("%s",s1);
    printf("the resultant string is:");
    mlen=strlen(s);sublen=strlen(s1);
    for(i=mlen;i>=n;i--)
    s[i+sublen]=s[i];
    for(i=0;i<sublen;i++)
    s[n+i]=s1[i];
    printf("%s",s);

    
    


    return 0;
}