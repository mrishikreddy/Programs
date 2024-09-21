#include <stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet:");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {printf("you entered vowel");} 
        else
        {printf("you entered a consonant");}  
    }
    else
    {
        printf("you entered a special character , close the window and try again with alphabet");
    }
    return 0;

}