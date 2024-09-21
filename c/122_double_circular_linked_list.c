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
{ 
  int size,i,val;
  printf("enter number of nodes:");
  scanf("%d",&size);
  if(size<1)
  printf("size cannot be less than 1,try again");
  else
  {
    printf("enter the values of %d nodes:",size);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    temp->data=val;
    temp->next=temp;
    temp->prev=temp;
    start=temp;
    for(i=2;i<=size;i++)
    {
      struct node*new=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&val);
      new->data=val;
      new->next=start;
      new->prev=temp;
      temp->next=new;
      temp=new;
    }
  }
}

void ibeg()
{ int val;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(start!=NULL)
  {
  struct node*temp=start;
  do
  {
   temp=temp->next;
  }while(temp->next!=start);
  new->next=start;
  start->prev=new;
  new->prev=temp;
  temp->next=new;
  start=new;
  }
  else
  { new->next=new;
    new->prev=new;
    start=new;
  }

}

void iend()
{
  int val;
  printf("enter the value of new node:");
  scanf("%d",&val);
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->data=val;
  if(start!=NULL)
  {
  struct node*temp=start;
  do
  {temp=temp->next;}while(temp->next!=start);
  temp->next=new;
  new->next=start;
  }
  else
  {
    new->next=new;
    new->prev=new;
    start=new;
  }
}

void ispec()
{ 
  if(start!=NULL)
  { int val,pos,count=1;
    printf("enter the position of new node");
    scanf("%d",&pos);
    printf("enter the value of new node");
    scanf("%d",&val);
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    struct node*temp=start;
    if(pos==1)
    { 
     do
    {
   temp=temp->next;
    }while(temp->next!=start);
    new->next=start;
    start->prev=new;
    new->prev=temp;
    temp->next=new;
    start=new;
    }
    else
    { struct node*previ;
      do
      { previ=temp;
        count++;
        temp=temp->next;
      }while(temp!=start && pos!=count);
      if(temp!=start)
      {
        previ->next=new;
        temp->prev=new;
        new->prev=previ;
        new->next=temp;
      }
      else if(temp == start && pos==count+1)
      {temp->next=new;
       new->next=start;
       
      }
      else
      printf("Invalid position");

    }

  }
  else
  printf("List is empty");
}

void ibspec()
{ if(start!=NULL)
  { int val,pos,count=1;
    printf("enter the position of new node");
    scanf("%d",&pos);
    pos-=1;
    printf("enter the value of new node");
    scanf("%d",&val);
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    struct node*temp=start;
    if(pos==1 || pos==0)
    { 
     do
    {
   temp=temp->next;
    }while(temp->next!=start);
    new->next=start;
    start->prev=new;
    new->prev=temp;
    temp->next=new;
    start=new;
    }
    else
    { struct node*previ;
      do
      { previ=temp;
        count++;
        temp=temp->next;
      }while(temp!=start && pos!=count);
      if(temp!=start)
      {
        previ->next=new;
        temp->prev=new;
        new->prev=previ;
        new->next=temp;
      }
      else if(temp == start && pos==count+1)
      {temp->next=new;
       new->next=start;
       
      }
      else
      printf("Invalid position");

    }

  }
  else
  printf("List is empty");
  
}
void iaspec()
{
if(start!=NULL)
  { int val,pos,count=1;
    printf("enter the position of new node");
    scanf("%d",&pos);
    pos+=1;
    printf("enter the value of new node");
    scanf("%d",&val);
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    struct node*temp=start;
    if(pos==1)
    { 
     do
    {
   temp=temp->next;
    }while(temp->next!=start);
    new->next=start;
    start->prev=new;
    new->prev=temp;
    temp->next=new;
    start=new;
    }
    else
    { struct node*previ;
      do
      { previ=temp;
        count++;
        temp=temp->next;
      }while(temp!=start && pos!=count);
      if(temp!=start)
      {
        previ->next=new;
        temp->prev=new;
        new->prev=previ;
        new->next=temp;
      }
      else if(temp == start && pos==count+1)
      {temp->next=new;
       new->next=start;
       
      }
      else
      printf("Invalid position");

    }

  }
  else
  printf("List is empty");
}

void travel()
{
  struct node*temp=start;
  do
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }while(temp!=start);
}

void delbeg()
{ 
    struct node*temp=start;
    do
    {temp=temp->next;}while(temp->next!=start);
    start=start->next;
    start->prev=temp;
    temp->next=start;
}

void delend()
{
    struct node*temp=start;
    struct node*previ;
    do
    {previ=temp;
     temp=temp->next;
    }while(temp->next!=start);
    previ->next=start;
    start->prev=previ;
}

void delnode()
{ int val;
  printf("enter the value of the node:");
  scanf("%d",&val);
  struct node*temp=start;
  struct node*previ;
    do
    { previ=temp;
      temp=temp->next;
    }while(temp->next!=start && val!=temp->data); 
   if(temp->next==start && val!=temp->data)
       printf("entered value is not present in the list");
   else
   {
   temp=temp->next;
   previ->next=temp;
   temp->prev=previ;
   }
   
}

void delp()
{
  if(start==NULL)
  printf("list is empty");
  else
  { int pos,count=1;
    printf("enter the position of the node:");
    scanf("%d",&pos);
    struct node*temp=start;
    if(pos==1)
    {
      do{
        temp=temp->next;
      }while(temp->next!=start);
      start=start->next;
      start->prev=temp;
      temp->next=start;
    }
    else
    { struct node*previ=temp;
      do
      { previ=temp;
        temp=temp->next;
        count+=1;
      }while(pos!=count && temp!=start);
      if(temp==start)
      printf("Invalid position");
      else
      {
        temp=temp->next;
        temp->prev=previ;
        previ->next=temp;
      }

    }

  }
    
}

void tb()
{ 
  struct node*temp=start;
  do
  {
    temp=temp->next;
  }while(temp!=start);
  do{
    printf("%d ",temp->data);
    temp=temp->prev;
  }while(temp!=start);
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
