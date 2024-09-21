#include<stdio.h>
#include<stdlib.h>
void create();
void ibeg();
void iend();
void ispec();
void ibspec();
void iaspec();
void travel();
void delbeg();
void delend();
void delnode();
void delp();
void tb();
void clear();
int main();

struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*start=NULL;

void create()
{ int size,i,val;
  printf("enter number of nodes:");
  scanf("%d",&size);
  if(size>0)
  { printf("enter the values of %d nodes:",size);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    start=temp;
    for(i=2;i<=size;i++)
    {
        struct node*new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        new->data=val;
        new->prev=temp;
        new->next=NULL;
        temp->next=new;
        temp=new;
    }

  }
  else
  printf("Invalid size\n");

}

void ibeg()
{
  int val;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(start==NULL)
  {
    new->prev=NULL;
    new->next=NULL;
    start=new; 
  }
  else
  {
    new->prev=NULL;
    new->next=start;
    start->prev=new;
    start=new;
  }

}

void iend()
{
  int val;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*temp=start;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(start==NULL)
  {
    new->prev=NULL;
    new->next=NULL;
    start=new;
  }
  else
  {
    while(temp->next!=NULL)
    temp=temp->next;
    new->next=NULL;
    new->prev=temp;
    temp->next=new;
  }

}

void ispec()
{ int val,pos,count=0;
  printf("enter the position:");
  scanf("%d",&pos);
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*temp=start;
  struct node*previ=start;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(pos==1)
  { new->prev=NULL;
    new->next=start;
    start->prev=new;
    start=new;
  }
  else
 {
  while(temp!=NULL && pos!=count)
  { count++;
    previ=temp;
    temp=temp->next;
  }
  previ->next=new;
  new->next=temp;
  new->prev=previ;
 }
}

void ibspec()
{
  if(start==NULL)
  printf("list is empty\n");
  else
  {
  int val,pos,count=1;
  printf("enter the position:");
  scanf("%d",&pos);
  pos=pos-1;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*temp=start;
  struct node*previ=start;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(pos==1 || pos==0)
  { new->prev=NULL;
    new->next=start;
    start->prev=new;
    start=new;
  }
  else
 {
  while(temp!=NULL && pos!=count)
  { count++;
    previ=temp;
    temp=temp->next;
  }
   if(temp==NULL && pos!=count)
  {printf("Invalid position is given\n");main();}
  else if(temp==NULL && pos==count)
  { previ->next=new;
    new->prev=previ;
    new->next=NULL;
  }
  else if(temp==NULL && pos==count)
  { temp->next=new;
    new->prev=temp;
    new->next=NULL;
  }
  else
  {
  previ->next=new;
  new->next=temp;
  new->prev=previ;
  }
 }}
}

void iaspec()
{
  int val,pos,count=1;
  if(start==NULL)
  {printf("list is empty\n");}
  else
  {
  printf("enter the position:");
  scanf("%d",&pos);
  pos=pos+1;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*temp=start;
  struct node*previ=start;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(pos==1)
  { new->prev=NULL;
    new->next=start;
    start->prev=new;
    start=new;
  }
  else
 {
  while(temp!=NULL && pos!=count)
  { count++;
    previ=temp;
    temp=temp->next;
  }
  if(temp==NULL && pos!=count)
  {printf("Invalid position is given\n");main();}
  else if(temp==NULL && pos==count)
  { previ->next=new;
    new->prev=previ;
    new->next=NULL;
  }
  else
  {
  previ->next=new;
  new->next=temp;
  new->prev=previ;
  }
 }}

}

void travel()
{
   if(start!=NULL)
    {struct node*temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
   } 
   else
   printf("list is empty\n");

}

void delbeg()
{ if(start==NULL)
  printf("list is empty\n");
  else
  {
  start=start->next; 
  start->prev=NULL;
  }
}

void delend()
{ if(start==NULL)
  printf("list is empty\n");
  else
  { struct node*temp=start;
    struct node*prev=start;
    while(temp->next!=NULL)
    {
      prev=temp;
      temp=temp->next;
    }
    prev->next=NULL;
  }

}

void delnode()
{
  int val;
  printf("enter the value of node:");
  scanf("%d",&val);
  if(start==NULL)
  printf("list is empty\n");
  else
  {struct node*temp=start;
  struct node*previ=start;
  if(val==temp->data)
  {
    start=start->next;
  }
  else{
  while(temp!=NULL && temp->data!=val)
  {
    previ=temp;
    temp=temp->next;
  }
  if(temp==NULL)
  printf("The given node value is not present in the list\n");
  else
  previ->next=temp->next;
  }
  }
}

void delp()
{ struct node*temp=start;
  struct node*previ=start;
  int pos,count=1;
  printf("enter the position of the node:");
  scanf("%d",&pos);
  if(pos==1)
  { 
    start=start->next; 
    start->prev=NULL;
  }
  else
  { 
    while(temp!=NULL && pos!=count)
    {
      previ=temp;
      temp=temp->next;
      count++;
    }
    if(temp==NULL && pos+1!=count)
    printf("Invalid position is given");
    else if(temp==NULL && pos+1==count)
    previ->next=NULL;
    else
    previ->next=temp->next;
  }

}

void tb()
{ if(start==NULL)
  printf("list is empty\n");
  else
  {
  struct node*temp=start;
  while(temp->next!=NULL)
  temp=temp->next;
  do
  {
    printf("%d ",temp->data);
    temp=temp->prev;
  }while(temp!=NULL);
  printf("\n");
  }
}

int main()
{ int ch;
  while(1)
  { 
   printf("\nenter:\n1 to create linked list\n2 to insert a node at beginning\n3 to insert a nod at end");
   printf("\n4 to insert a node at specified position\n5 to add element before specific position\n6 to add element after specific position");
   printf("\n7 to traverse\n8 to delete a node at beginning\n9 to delete a node at end\n10 to delete a node\n11 to delete a node at specified position");
   printf("\n12 to transverse backward\n13 to clear the list\n14 to exit  :");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1:create();break;
    case 2:ibeg();break;
    case 3:iend();break;
    case 4:ispec();break;
    case 5:ibspec();break;
    case 6:iaspec();break;
    case 7:travel();break;
    case 8:delbeg();break;
    case 9:delend();break;
    case 10:delnode();break;
    case 11:delp();break;
    case 12:tb();break;
    case 13:start=NULL;break;
    case 14:exit(0);break;
    default:printf("Invalid input is given,try once again");
  }
 }


    return 0;
}