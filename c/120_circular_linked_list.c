#include<stdio.h>
#include<stdlib.h>
void create();
void ibeg();
void iend();
void ispec();
void ibspec();
void iaspec();
void delbeg();
void delend();
void travel();
void clear();
void delnode();
void delnode();
void delp();

struct node{
    int data;
    struct node*next;
};
struct node*start=NULL;

void ispec()
{
    int pos,val,count=1;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    struct node*temp=start;
    struct node*prev=temp;
    printf("enter the postion of the new node:");
    scanf("%d",&pos);
    printf("enter the value of new node:");
    scanf("%d",&val);
    
    if(pos!=1)
    { new->data=val;
    do
    {   prev=temp;
        temp=temp->next;
        count+=1;
    }while(temp!=start && count!=pos);
    
    if(temp==start)
    printf("the entered position is invalid");
    }
    else
    {   prev->next=new;
        new->next=temp;
        new->data=val;
        new->next=start;
        do
        {
            temp=temp->next;
        }while(temp->next!=start);
        temp->next=new;
        start=new;
    }
}

void ibspec()
{ if(start==NULL)
  printf("the list is empty");
  else
  { int count=1,pos,val;
  printf("enter the position:");
  scanf("%d",&pos);
  pos=pos-1;
  printf("enter the value of new node:");
  scanf("%d",&val);
    struct node*temp=start;
    struct node*prev;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    if(pos>1){
    do
    { prev=temp;
      temp=temp->next;
      count+=1;
    }while(pos!=count && temp!=start);
    if(start==temp)
    printf("invalid position is given");
    else
    {
    prev->next=new;
    new->next=temp;}
  }
  else 
  { 
    do
    {
        temp=temp->next;
    }while(temp->next!=start);
    new->next=start;
    temp->next=new;
    start=new;


  }
  }
    
}
void iaspec()
{
   if(start==NULL)
  printf("the list is empty");
  else
  { int count=1,pos,val;
  printf("enter the position:");
  scanf("%d",&pos);
  pos=pos+1;
  printf("enter the value of new node:");
  scanf("%d",&val);
    struct node*temp=start;
    struct node*prev;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    do
    { prev=temp;
      temp=temp->next;
      count+=1;
    }while(pos!=count && temp!=start);
   
    if(start!=temp && pos==count)
    {
    prev->next=new;
    new->next=temp;}
    else if(start==temp && pos==count)
    {prev->next=new;
    new->next=start;}
    else
    printf("Invalid position is given");
    }
 
}

void ibeg()
{   int val;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the value of new node:");
    scanf("%d",&val);
    if(start!=NULL)
    {new->data=val;
    new->next=start;
    struct node*temp=start;
    do
    {
        temp=temp->next;
    }while(temp->next!=start);
    temp->next=new;
    start=new;}
    else
    {
       start=new;
       new->next=new;
       new->data=val;
    }

}
void iend()
{ int val;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  printf("enter the value of new node:");
  scanf("%d",&val);
  if(start!=NULL)
  {
  new->data=val;
  struct node*temp=start;
  do
  {
    temp=temp->next;
  }while(temp->next!=start);
  temp->next=new;
  new->next=start;}
  else
  {
    start=new;
    start->next=start;
    new->data=val;
  }
}

void create()
{
    int size,val;
    printf("enter the number of nodes:");
    scanf("%d",&size);
    printf("enter the values of %d nodes:",size);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    temp->data=val;
    temp->next=start;
    start=temp;
    for(int i=2;i<=size;i++)
    { 
      struct node*new=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&val);
      new->data=val;
      new->next=start;
      temp->next=new;
      temp=new;
    }
}
void clear()
{
    start=NULL;
}

void travel()
{   if(start!=NULL)
    {struct node*temp;
    temp=start;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=start);}
    else
    printf("list is empty\n");
}

void delbeg()
{  if(start!=NULL)
    {
    struct node*temp;
    temp=start;
     do
     {temp=temp->next;
     }while(temp->next!=start);
     
     start=start->next;
     temp->next=start;}
    else
    printf("list is empty");
}
void delend()
{
    if(start!=NULL)
    { struct node*temp;
      temp=start;
     struct node*prev=temp;
     do
     {
         prev=temp;
         temp=temp->next;
     }while(temp->next!=start); 
    prev->next=start;
    }
    else
    printf("list is empty");
}

void delp()
{    
    if(start!=NULL)
    {  
      int pos;
      struct node*temp;
      printf("enter the position:");
    scanf("%d",&pos);
    if(pos==1)
    { temp=start;
     do
     {
      temp=temp->next;
    }while(temp->next!=start);
     start=start->next;
    temp->next=start;
     }
     else
      { int count=1;
      temp=start;
      struct node*prev=start;
     do
   {
       count+=1;
       prev=temp;
       temp=temp->next;
   }while(temp!=start&& count!=pos);
   if(temp==start)
   printf("invalid position");
   else
   prev->next=temp->next;
  }
  }
    else
    printf("list is empty");
}
void delnode()
{
    struct node*temp=start;
    if(start!=NULL)
    { int val;
      printf("enter the value of node to be deleted:");
      scanf("%d",&val);
      struct node*prev;
      temp=start;
      if(temp->data==val)
      {temp=start;
      do
      {temp=temp->next;
      }while(temp->next!=start);
     
      start=start->next;
      temp->next=start;
        
      }
      else
      {
      do
      {
        prev=temp;
        temp=temp->next;
      }while(temp!=start && temp->data!=val);
      prev->next=temp->next;
      }
      
    }
    else
    printf("list is empty");

}
void loop()
{   if(start!=NULL)
    {
    int loop,count=0;
    printf("enter the number of loops:");
    scanf("%d",&loop);
    struct node*temp=start;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        if(temp==start)
        {count+=1;printf("  ");}
    }while(count!=loop);

    }
    else
    printf("the list is empty");
}


int main()
{ int ch;
  while(1)
  {printf("\nenter:\n1 to create linked list\n2 to insert a node at beginning\n3 to insert a nod at end");
   printf("\n4 to insert a node at specified position\n5 to add element before specific position\n6 to add element after specific position");
   printf("\n7 to traverse\n8 to delete a node at beginning\n9 to delete a node at end\n10 to delete a node\n11 to delete a node at specified position");
   printf("\n12 to loop the list\n13 to clear the list\n14 to exit  :");
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
    case 12:loop();break;
    case 13:clear();break;
    case 14:exit(0);break;
    default:printf("Invalid input is given,try once again");
 }}
 return 0;
}