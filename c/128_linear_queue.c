#include<stdio.h>
#include<stdlib.h>
int que[10],r=-1,f=-1;

void nq()
{   if(r==9 || r<f)
    printf("queue is full");
    else
    {
    int num;
    printf("enter the value:");
    scanf("%d",&num);
    if(f==-1)
    f=0;
    r+=1;
    que[r]=num;
}
}

void dq()
{
    if(r==-1)
    printf("The list is empty");
    else
    { printf("%d",que[f]);
      f+=1;
    }
}

void isf()
{
    if(r==9)
    printf("True");
    else
    printf("False");
}

void ie()
{
     if(r==-1 || r<f)
    printf("True");
    else
    printf("False");
}

void display()
{
    int i;
    for(i=f;i<=r;i++)
    printf("%d ",que[i]);
}

void peek()
{
    printf("%d",que[f]);
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n\n\nenter\n1 to enqueue\n2 to dequeue\n3 to check is empty\n4 to check is full\n5 to get the peek\n6 to display\n7 to exit\nyour choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: nq();break;
            case 2:dq();break;
            case 3:ie();break;
            case 4:isf();break;
            case 5:peek();break;
            case 6:display();break;
            case 7:exit(0);
            default:printf("Invalid Input is given try again");break;
        }
    }

}