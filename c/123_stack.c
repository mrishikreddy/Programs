#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack[20],top=-1,size;

void push()
{ int item;
  if(top==size-1)
  printf("stack is full");
  else
  {
  printf("enter the value:");
  scanf("%d",&item);
  top+=1;	
  stack[top]=item;}
}
void pop()
{  
	if(top==-1)
	printf("stack is empty");
	else
	{
	printf("%d",stack[top]);
	top=top-1;
		
	}
}
void display()
{
	if(top==-1)
	printf("stack is empty");
	else
	{   int i;
		for(i=top;i>=0;i--)
		printf("%d ",stack[i]);
	}
}

void peek()
{
	if(top==-1)
	printf("stack is empty");
	else
	printf("%d",stack[top]);
}
void isFull()
{
	if(top==-1)
	printf("stack is empty");
	else if(top==size-1)
	printf("1");
	else
	printf("0");
	
}

void isEmpty()
{
	if(top==-1)
	printf("1");
	else
	printf("0");
	
}


int main()
{ int ch;
  printf("enter the size:");
  scanf("%d",&size);
 while(1)
   { printf("\n\nenter:\n1 to push\n2 to pop\n3 to display\n4 to check full\n5 to check empty\n6 to get the peek\n7 to exit");
     scanf("%d",&ch);
     switch(ch)
     {
     	case 1:push();break;
     	case 2:pop();break;
     	case 3:display();break;
     	case 4:isFull();break;
		case 5:isEmpty();break;
		case 6:peek();break; 
     	case 7:exit(0);
     	default:printf("Invalid Input, Try Again");
     }
   	
   }
	return 0;
}
