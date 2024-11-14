#include<stdio.h>
struct{
    int st,end;
}sch[10];

void insertValues(int s[],int f[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        sch[i].st = s[i];
        sch[i].end = f[i];
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(sch[j].end>sch[j+1].end)
            {
                temp = sch[j+1].st;
                sch[j+1].st = sch[j].st;
                sch[j+1].st = temp;

                temp = sch[j+1].end;
                sch[j+1].end = sch[j].end;
                sch[j+1].end = temp;
            }
        }
    }
}

void selectActivity(int size)
{
    int i=0,prevEnd;
    printf("The following activites are selected:\n");
    printf("Activity %d: %d-%d\n",i,sch[i].st,sch[i].end);
    prevEnd = sch[i].end;
    for(i=1;i<size;i++)
    {
        if(sch[i].st>=prevEnd)
            {printf("Activity %d: %d-%d\n",i,sch[i].st,sch[i].end);
             prevEnd = sch[i].end;
            }
    }
}

int main()
{
    int s[] = { 1, 3, 0, 5, 8, 5 };
    int f[] = { 2, 4, 6, 7, 9, 9 };
    insertValues(s,f,6);
    selectActivity(6);
    return 0;
}