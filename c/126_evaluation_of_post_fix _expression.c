#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int stack[100],top=-1;

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

int main()
{   char ch;
    int a,b;
    printf("enter the expression:");
    while(ch!='\n')
    {
        scanf("%c",&ch);
        if(isdigit(ch))
        push((int)ch-48);
       else{
        b=pop();a=pop();
       switch(ch)
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
   
   
   printf("%d\n",stack[top+1]);
 
}