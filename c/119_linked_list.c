#include<stdio.h>
#include<stdlib.h>
void create();
void inbeg();
void atend();
void atspec();
void bspec();
void aspec();
void travel();
void del();
void delspec();
void delbeg();
void delend();
void travel();
int main();
struct node{
    int data;
    struct node*next;
};
struct node*start;
void delbeg()
{
  struct node*temp=start;
  if(start==NULL)
  printf("List is empty");
  else
  {printf("deleted node %d\n",temp->data);
    start=temp->next;}

}
void delend()
{ struct node*temp=start;
  struct node*prev;
  if(start==NULL)
  printf("List is empty");
  else
  { if(start->next==NULL)
    {start=NULL;
    main();}
    else
    while(temp->next!=NULL)
    {
      prev=temp;
      temp=temp->next;
    }
    printf("deleted node %d",prev->data);
    prev->next=NULL;
  }


}
void delspec()
{ struct node*temp=start;
  struct node*prev;
  int pos,count=1;
  printf("enter the position:");
  scanf("%d",&pos);
  if(start==NULL)
  printf("list is empty\n");
  else
  { while(temp!=NULL && count!=pos)
    { prev=temp;
      temp=temp->next;
      count++;
    }
    if(temp==NULL){
      printf("\nInvalid position is given\n");
      main();
    }
    prev->next=temp->next;
  }
}
void del()
{ int num;
  struct node*temp=start;
  struct node*prev;
  printf("entre the node value:");
  scanf("%d",&num);
  if(start==NULL)
  printf("list is empty\n");
  else
  {
    while(temp!=NULL && temp->data!=num)
    { prev=temp;
      temp=temp->next;}
    
    if(temp==NULL)
    printf("Invalid node value is given\n");
    else  
    printf("node with value %d is deleted succefully\n",num);
    prev->next=temp->next;
    
  }



}
void bspec()
{int num,pos,count=1;
  struct node*temp,*prev,*new;
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter the element:");
  scanf("%d",&num);
  printf("enter the position");
  scanf("%d",&pos);
  new->data=num;
  temp=start;
  while(temp!=NULL && count!=(pos-1))
  {prev=temp;temp=temp->next;count++;}
  if(start==NULL)
  {printf("List is empty\n");main();}
  if(temp==NULL)
  {printf("Invalid position is given\n");main();}
  prev->next=new;
  new->next=temp;

}
void aspec()
{int num,pos,count=1;
  struct node*temp,*prev,*new;
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter the element:");
  scanf("%d",&num);
  printf("enter the position");
  scanf("%d",&pos);
  new->data=num;
  temp=start;
  while(temp!=NULL && count!=(pos+1))
  {prev=temp;temp=temp->next;count++;}
  if(start==NULL)
  {printf("List is empty\n");main();}
  if(temp==NULL)
  {printf("Invalid position is given\n");main();}
  else{
  prev->next=new;
  new->next=temp;}


}
void atspec()
{  int num,pos,count=1;
  struct node*temp,*prev,*new;
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter the element:");
  scanf("%d",&num);
  printf("enter the position");
  scanf("%d",&pos);
  new->data=num;
  temp=start;
  while(temp!=NULL && count!=pos)
  {prev=temp;temp=temp->next;count++;}
  if(start==NULL)
  {printf("List is empty\n");main();}
  if(temp==NULL)
  {printf("Invalid position is given\n");main();}
  prev->next=new;
  new->next=temp;
}
void inbeg()
{ int num;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the value:");
    scanf("%d",&num);
    temp->data=num;
    temp->next=start;
    start=temp;
}
void create()
{ int value,i,size;
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
 if(start==NULL)
 {
  printf("enter the number of nodes:");
  scanf("%d",&size);
  printf("enter the value:");
  scanf("%d",&value);
  temp->data=value;
  temp->next=NULL;
  start=temp;
  for(i=2;i<=size;i++)
  {
    struct node*new=(struct node*) malloc(sizeof(struct node));
    printf("enter the value:");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    temp->next=new;
    temp=new;
  }
 }
 else
 {printf("list already exits\n");main();}
}
void travel()
{
   struct node*temp;;
   temp=start;
   if(temp!=NULL)
   { while(temp!=NULL)
     { printf("%d ",temp->data);
       temp=temp->next;
     }
     printf("\n");
   }
   else
   printf("list is empty\n");
}
void atend()
{ 
  int num;
 struct node*temp=(struct node*)malloc(sizeof(struct node));
 struct node*travel=(struct node*)malloc(sizeof(struct node));

 printf("enter the number:");
 scanf("%d",&num);
 travel=start;
 temp->data=num;
 temp->next=NULL;
 if(start!=NULL)
 {
 while(travel->next!=NULL)
 travel=travel->next;
travel->next=temp;}
else
start=temp;

}
int main()
{ int ch;
  while(1)
  { printf("\nenter:\n1 to create linked list\n2 to insert a node at beginning\n3 to insert a nod at end");
    printf("\n4 to insert a node at specified position\n5 to add element before specific position\n6 to add element after specific position");
   printf("\n7 to traverse\n8 to delete a node at beginning\n9 to delete a node at end\n10 to delete a node\n11 to delete a node at specified position");
   printf("\n12 to clear list\n13 to exit  :");
    scanf("%d",&ch);
    switch(ch)
    { case 1:  create();break;
      case 2:  inbeg();break;
      case 3:  atend();break;
      case 4:  atspec();break;
      case 5:  bspec();break;
      case 6:  aspec();break; 
      case 7:  travel();break;
      case 8:  delbeg();break;
      case 9:  delend();break;
      case 10:  del();break;
      case 11:  delspec();break;
      case 12: start=NULL;break;
      case 13: exit(0);break;
      default :printf("Invalid Input");
    }
  }
    return 0;
}