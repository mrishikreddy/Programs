#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
void mainp();
void printing();
int nr(int);
int esti(int);
int target = 0;
int etpsp,etap,etem,eteplab,etele,etaptt,etpsplab,psp,ap,em,eplab,ele,aptt,psplab;
int main()
{
    
    mainp();
    return 0;
}

void mainp()
{
    printf("Enter your target:");
    scanf("%d",&target);
    system("cls");
    printf(" Target:%d\n\n",target);
    printf("Enter the marks of mid 1 for all the subjects:\n\n");
    printf("1.PSP:");
    scanf("%d",&psp);
    printf("2.AP/EMMS:");
    scanf("%d",&ap);
    printf("3.EM:");
    scanf("%d",&em);
    printf("4.EP LAB:");
    scanf("%d",&eplab);
    printf("5.ELE:");
    scanf("%d",&ele);
    printf("6.APTT/ES:");
    scanf("%d",&aptt);
    printf("7.PSP LAB:");
    scanf("%d",&psplab);
    
    etpsp=esti(psp);
    etap=esti(ap);
    etem=esti(em);
    eteplab=esti(eplab);
    etele=esti(ele);
    etaptt=esti(aptt);
    etpsplab=esti(psplab);
    printing();
}

int esti(int m)
{
    int c1,c2,result;
    float x,y,z,a,b,c;
    x = m*0.75;
    y = target-x;
    z = y/0.25;
    c1 = round(z);

    a = m*0.25;
    b = target-a;
    c = b/0.75;
    c2= round(c);

    if((c1<=40)||(c2<=40))
    {
        result=(c1<c2)?c1:c2;
        return result;
    }
    else
    return 0;
}

void printing()
{
    int op;
    system("cls");
    printf("\n  Target:%d",target);
    printf("\n\n  Subjects\tFirst Mid marks\tEstimated marks\n\n");
    printf("  1.PSP     :\t%d",psp);
        if(etpsp!=0)
        printf("\t%d\n",etpsp);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(psp));             
    printf("  2.AP/EMMS  :\t%d",ap);
        if(etap!=0)
        printf("\t%d\n",etap);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(ap));
    printf("  3.EM      :\t%d",em);
         if(etem!=0)
        printf("\t%d\n",etem);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(em));
    printf("  4.EP LAB  :\t%d",eplab);
         if(eteplab!=0)
        printf("\t%d\n",eteplab);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(eplab));
    printf("  5.ELE     :\t%d",ele);
         if(etele!=0)
        printf("\t%d\n",etele);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(ele));
    printf("  6.APTT/ES  :\t%d",aptt);
         if(etaptt!=0)
        printf("\t%d\n",etaptt);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(aptt));
    printf("  7.PSP LAB :\t%d",psplab);
         if(etpsplab!=0)
        printf("\t%d\n",etpsplab);
        else
        printf("\tTarget not reachable-Max(%d) if mid-2 is 40 \n",nr(psplab));
    printf("\n\n  Enter 1 to re-cacluate\n  Enter 2 to return to main menu\n  Enter 3 to exit\n  Your choice:");
    scanf("%d",&op);
    if(op==1)
    mainp();
    else
    exit(0);
}

int nr(int m)
{
    int y;
    float x;
    x=(m*0.25)+30;
    y=round(x);
    return y;
}