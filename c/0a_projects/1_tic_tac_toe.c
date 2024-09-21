#include<stdio.h>
#include<conio.h>
int checkwin();
void board();
char s[10]={'1','2','3','4','5','6','7','8','9','\0'};
int main()
{
    int player=1,choice,i;
    char mark;
    do
    {
    board();
    player=(player % 2)?1:2;
    mark=(player==1)? 'X' : 'O' ;
    printf("  player %d, enter a number:",player);
    scanf("%d",&choice);
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
    printf("player %d won the match",--player);}
    else
    {
    board();
    printf("  Game is draw");
    getch();}
   
    return 0;
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
    printf("  Player 1 - (X)\tPlayer 2 - (O)\n\n\n");
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
}