#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void mainprogram();
int checkwin();
void board();
int computer();
int num,i;
char s[10]={'1','2','3','4','5','6','7','8','9','\0'},name[30];
int main()
{
    printf("\n\t\tWelcome to Tic Tac Toe\n\n\n");
    printf("  Enter player name:");
    gets(name);
    system("cls");
    mainprogram();
    return 0;
}

void mainprogram()
{
    int player=1,choice,chance;
    char mark,str[10];
    strcpy(str,s);

    do
    {
    board();
    player=(player % 2)?1:2;
    mark=(player==1)? 'X' : 'O' ;
    if(player==1)
    {
    printf("\n\n  %s,",name);
    printf(" enter a number:");
    scanf("%d",&choice);}
    else
    choice=computer();

    num=choice;
    if ((s[0]=='1')&&(choice== 1))
    s[0]=mark;
    else if ((s[1]=='2')&&(choice== 2))
    s[1]=mark;
    else if ((s[2]=='3')&&(choice== 3))
    s[2]=mark;
    else if ((s[3]=='4')&&(choice== 4))
    s[3]=mark;
    else if ((s[4]=='5')&&(choice== 5))
    s[4]=mark;
    else if ((s[5]=='6')&&(choice== 6))
    s[5]=mark;
    else if ((s[6]=='7')&&(choice== 7))
    s[6]=mark;
    else if ((s[7]=='8')&&(choice== 8))
    s[7]=mark;
    else if ((s[8]=='9')&&(choice== 9))
    s[8]=mark;
    else
    {
        printf("  invalid input,retry again");
        player--;
        getch();
    }
    i=checkwin();
    player++;
    }while(i== -1);
    if(i==1)
    {
    board();
    --player;
    if(player==1)
    {
    printf("\n\n  %s won the match\n\n\n",name);
    strcpy(s,str);
    printf("  press 1 to play again, press 0 to exit:");
    scanf("%d",&chance);
    if(chance==1)
    mainprogram();
    else if(chance==0)
    exit(0);
    else
    {printf("\n\n  You did not shared your opinion properly");getch();}
    }
    else
    {
    printf("\n\n  Computer won the match\n\n\n");
    strcpy(s,str);
    printf("  press 1 to play again, press 0 to exit:");
    scanf("%d",&chance);
    if(chance==1)
    mainprogram();
    else if(chance==0)
    exit(0);
    else
    {printf("\n\n  You did not shared your opinion properly");
    getch();}
    }
    }
    else
    {
    board();
    printf("\n\n  Game is draw\n\n\n");
    strcpy(s,str);
    printf("  press 1 to play again, press 0 to exit:");
    scanf("%d",&chance);
    if(chance==1)
    mainprogram();
    else if(chance==0)
    exit(0);
    else
    {printf("\n\n  You did not shared your opinion properly");getch();}
   }
}

int checkwin()
{
    if(((s[0]==s[1])&&(s[0]==s[2]))||((s[3]==s[4])&&(s[3]==s[5]))||((s[6]==s[8])&&(s[6]==s[7])) )
    return 1;
    else if(((s[0]==s[3])&&(s[0]==s[6]))||((s[1]==s[4])&&(s[1]==s[7]))||((s[2]==s[5])&&(s[2]==s[8])))
    return 1;
    else if(((s[0]==s[4])&&(s[0]==s[8]))||((s[2]==s[4])&&(s[2]==s[6])))
    return 1;
    else if (s[0] == '1' || s[1] == '2' || s[2] == '3' || s[3] == '4' || s[4] == '5' || s[5] == '6' || s[6] == '7' || s[7] == '8' || s[8] == '9')
    return -1;
    else
    return 0;
}


void board()
{
    system("cls");
    
    printf("\t\tTic Tac Toe\n\n");
    printf("  %s - (X)\tComputer - (O)\n\n\n",name);
    printf("\t         |   |    \n");
    printf("\t       %c | %c | %c \n",s[0],s[1],s[2]);
    printf("\t     ____|___|____\n");
    printf("\t         |   |    \n");
    printf("\t       %c | %c | %c \n",s[3],s[4],s[5]);
    printf("\t     ____|___|____\n");
    printf("\t         |   |    \n");
    printf("\t       %c | %c | %c \n",s[6],s[7],s[8]);
    printf("\t         |   |    \n");
    printf("\n\n");
    if(num!=0 && i!=1)
    printf("  Computer choice:%d",num);
}

int computer()
{
   if((s[1]==s[2]||s[4]==s[8]||s[3]==s[6])&&(s[0]=='1'))
   return 1;
   else if((s[4]==s[7]||s[0]==s[2])&&(s[1]=='2'))
   return 2;
   else if((s[0]==s[1]||s[6]==s[4]||s[5]==s[8])&&(s[2]=='3'))
   return 3;
   else if((s[0]==s[6]||s[4]==s[5])&&(s[3]=='4'))
   return 4;
   else if((s[0]==s[8])&&(s[4]=='5'))
   return 5;
   else if((s[1]==s[7])&&(s[4]=='5'))
   return 5;
   else if((s[2]==s[6])&&(s[4]=='5'))
   return 5;
   else if((s[3]==s[5])&&(s[4]=='5'))
   return 5;
   else if((s[3]==s[4]||s[2]==s[8])&&(s[5]=='6'))
   return 6;
   else if((s[0]==s[3]||s[7]==s[8]||s[4]==s[2])&&(s[6]=='7'))
   return 7;
   else if((s[1]==s[4]||s[6]==s[8])&&(s[7]=='8'))
   return 8;
   else if((s[6]==s[7]||s[0]==s[4]||s[2]==s[5])&&(s[8]=='9'))
   return 9;
   else if(s[0]=='1')
   return 1;
   else if(s[4]=='5')
   return 5;
   else if(s[2]=='3')
   return 3;
   else if(s[6]=='7')
   return 7;
   else if (s[8]=='9')
   return 9;
   else if(s[7]=='8')
   return 8;
   else if(s[1]=='2')
   return 2;
   else if(s[5]=='6')
   return 6;
   else if(s[3]=='4')
   return 4;
}