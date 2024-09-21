#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top=0;

void push(char ch)
{ top+=1;
  stack[top]=ch;
}

char pop()
{ char ch;
  ch=stack[top];
  top-=1;
  return ch;
}

int pd(char ch)
{ if(ch=='^')
      return 3;
  else if(ch=='*' || ch=='/')
      return 2;
  else if(ch=='+' || ch=='-')
      return 1;
  else
      return 0;
}

int isop(char s)
{  if(s=='+'||s=='-'||s=='*'||s=='/'||s=='^')
   return 1;
   else
   return 0;

}

void InfToPos(char str[],char postfix[])
{ int i=0,j=0;
  char item,x;
  stack[top]='(';
  top+=1;
  strcat(str,")");
  item=str[i];
  i+=1;
  while(item!='\0')
  {
    if(item=='(')
      push('(');
    else if(item==')')
    { x=pop();
      while(isop(x)==1)
      { postfix[j]=x;
        j+=1;
        x=pop();
      }
    }
    else if(isalnum(item))
    { postfix[j]=item;
      j+=1;
    }
    else if(isop(item)==1)
    { x=pop();
      while(isop(x)==1 && pd(x)>=pd(item))
      {
        postfix[j]=x;
        j+=1;
        x=pop();
      }
      push(x);
      push(item);
    }
    item=str[i];
    i+=1;
  }
  postfix[j]='\0';
}
int main()
{ char str[100],postfix[100];
  int count=0,i=0;
  printf("enter the infix expression:");
  scanf("%s",str);
 while(str[i]!='\0')
 { if(str[i]=='(')
   count++;
   else if(str[i]==')')
   count--;
   i+=1;
 }
 if(count==0)
 {
  InfToPos(str,postfix);
  printf("postfix expression for the given infix expression is:%s",postfix);
 }
 else
  {printf("The given expression is invalid"); exit(0);}
  return 0;
  
}