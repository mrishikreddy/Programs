#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char data;
    struct node*next;
};
struct node*head;

void push(char ch)
{
    struct node*new,*temp;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = ch;
    new->next = NULL;
    if(head==NULL)
    {
        head = new;
    }
    else
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next=new;
    }
}

void pop()
{
    struct node*temp,*prev;
    char ch;
    temp = (struct node*)malloc(sizeof(struct node));
    prev = (struct node*)malloc(sizeof(struct node));
    while(head!=NULL)
    {
        if(head->next==NULL)
        {   ch = head->data;
            head=NULL;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            ch = temp->data;
            prev->next=NULL;
        }
        printf("%c",ch);
    }


}
int main()
{
    char s[10],i;
    printf("enter the string: ");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
        push(s[i]);
    printf("The reverse of the list is: ");
    pop();
    return 0;
}