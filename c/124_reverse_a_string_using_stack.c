#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node*next;
};
struct node*start=NULL;
int main()
{
    char ch;
    printf("enter the string:");
    scanf("%c",&ch);
    while(ch!='\n')
    {
        struct node*new=(struct node*)malloc(sizeof(struct node));
        new->data=ch;
        if(start==NULL)
            new->next=NULL;
        else
        new->next=start;
        start=new;
        scanf("%c",&ch);
    }
    printf("the reverse of a string is:");
    struct node*temp=start;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
    return 0;
}