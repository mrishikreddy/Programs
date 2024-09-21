#include<stdio.h>
int main()
{
    char ch;
    FILE*f2,*f3;
    
    f2=fopen("vow.txt","w");
    f3=fopen("con.txt","w");
    printf("enter the string:");
    do
    {
        ch=getchar();
        if((ch!=97)&&(ch!=101)&&(ch!=105)&&(ch!=111)&&(ch!=117)&&(ch!=32))
        putc(ch,f3);
        if((ch==97)||(ch==101)||(ch==105)||(ch==111)||(ch==117))
        putc(ch,f2);   
    }while(ch!=EOF);
    fclose(f2);
    fclose(f3);
    f2=fopen("vow.txt","r");
    printf("\nvowels in vow.txt file are:");
    do{
        ch=getc(f2);
        printf("%c",ch);
    }while(ch!=EOF);
    fclose(f2);

    f3=fopen("con.txt","r");
    do{
        ch=getc(f3);
        printf("%c",ch);
    }while(ch!= EOF);
    fclose(f3);

    return 0;
}