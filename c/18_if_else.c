#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("WELCOME TO TSRTC TICKET BOOKING PORTAL\nPLEASE ENTER YOUR AGE:");
    scanf("%d",&age);
    if(age<12)
       {
        printf("YOUR TICKET PRICE IS 50 RUPEES ONLY\nINSERT THE MONEY");

       } 
    else{
         printf("YOUR TICKET PRICE IS 100 RUPEES ONLY\nINSERT THE MONEY");

        }    
    getch();
    return 0;
}
