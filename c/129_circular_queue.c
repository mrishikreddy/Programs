#include<stdio.h>
#include<conio.h>
char que[10];
int front=-1,rear=-1;
void enq(char ch)
{
    if(rear+1==front || (rear==9 && front==0))
    printf("que is full");
    else
    {
    if(rear==-1)
    front=0;
    else if(rear==9)
    rear=-1;

    rear+=1;
    que[rear]=ch;
    }
}
char deq()
{
    char ch=' ';
    if(front==-1)
    printf("queue is empty");
    else
    {
        ch=que[front];
        if(rear==front)
        {front=-1;rear=-1;}
        else if(front==9)
        front=0;
        else
        front+=1;
    }
    return ch;
}
int main()
{
    int num;
    char ch;
    while(1)
    {
        printf("\n\nenter:\n1.enqueue:\n2.dequeue\n");
        scanf("%d",&num);
        getchar();
        if(num==1)
        {
           printf("enter a charcter:");
           scanf("%c",&ch);
           enq(ch);
        }
        else if(num==2)
        {
            ch=deq();
            printf("%c",ch);
        }
        else
        printf("Invalid Input");
    }
    return 0;
}