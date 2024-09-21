#include <stdio.h>
int main()
{
    int m;
    printf("enter marks:");
    scanf("%d", &m);
    if(m <= 100 && m >= 90)
       {
        printf("grade:10");
       }
    else if(m <= 90 && m >= 80)
       {
        printf("grade:9");
       }   
     else if(m <= 80 && m >= 70)
       {
        printf("grade:8");
       }      
     else if(m <= 70 && m >= 80)
       {
        printf("grade:7");
       }       
     else if(m <= 60 && m >= 70)
       {
        printf("grade:6");
       }   
     else if(m <= 50 && m >= 60)
       {
        printf("grade:5");
       }
     else if(m <= 40 && m >= 50)
       {
        printf("grade:4");
       }           
     else if(m <= 30 && m >= 20)
       {
        printf("grade:3");
       }  
     else if(m <= 20 && m >= 10)
       {
        printf("grade:2");
       }    else if(m <= 10 && m >= 0)
       {
        printf("grade:1");
       }
     else 
     {
      printf("invalid input");
     }   
    return 0;
}      