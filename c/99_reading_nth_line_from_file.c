#include<stdio.h>
int main()
{
    FILE*f;
    int n,dn=0;
    char line[200],ch;
    f=fopen("reading.txt","w");
    printf("enter the information:\n");
    do
    {ch=getchar();
    putc(ch,f);
    }while(ch!=EOF);
    fclose(f);
    printf("enter the line number");
    scanf("%d",&n);
    f=fopen("reading.txt","r");
    while(fgets(line,200,f)!=NULL)
    {
        dn++;
        if(dn==n)
        printf("%s",line);
    }

    return 0;
}