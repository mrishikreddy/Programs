#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,temp;
    char t[40];
    struct emp{
        int sal,exp;
        char name[40];
    }e[20];
    printf("enter the number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("enter name,salary,experience of emp no.%d",i+1);
    scanf("%s%d%d",e[i].name,&e[i].sal,&e[i].exp);}

    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++){
        if(strcmp(e[i].name,e[j].name)<0)
        { strcpy(t,e[i].name);
          strcpy(e[i].name,e[j].name);
          strcpy(e[j].name,t);
          
          temp=e[i].sal;
          e[i].sal=e[j].sal;
          e[j].sal=temp;

          temp=e[i].exp;
          e[i].exp=e[j].exp;
          e[j].exp=temp;
        }}
    }
    for(i=0;i<n;i++)
    printf("%s %d %d\n",e[i].name,e[i].sal,e[i].exp);

    return 0;

}