#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int stack[100],top=-1,count=0;

void push(int num)
{
    top+=1;
    stack[top]=num;
}

int pop()
{
    int temp;
    temp=stack[top];
    top=top-1;
    return temp;
}

void change(char cha,char chb)
{
    int numa,numb;
    if(isdigit(cha) && isdigit(chb))
    { numa=(int)cha-'0';
      numb=(int)chb-'0';
      numa= numa*10+numb;
      count++;
      push(numa);
    }
    else if(isdigit(cha) && chb==' ')
    {
        numa=(int)cha-'0';
        push(numa);
    }
    
}

int main()
{
    char str[50],cha,chb;
    int i=0,a,b;
    printf("enter the expression:");
    scanf("%[^\n]s",str);
    while(str[i]!='\0')
    {  
        cha=str[i];
        i+=1;

        if(str[i]==' ')
        {
         chb=str[i];
         i+=1;
        }
        else
        { 
            chb=str[i];
            i+=2; 
        }

        if(isdigit(cha))
        change(cha,chb);
        else
        {
          b=pop();a=pop();
          switch(cha)
        {
         case '+':a=a+b;break;
         case '-':a=a-b;break;
         case '*':a=a*b;break;
         case '/':a=a/b;break;
         case '^':a=pow(a,b);break;
        }
        push(a);
        }
    }
    
    if(count>0)
    top+=1;

    printf("%d\n",stack[top]);
   
    return 0;
}