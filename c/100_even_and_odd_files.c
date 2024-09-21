// it is recommended to use "fprintf(pointer_name,"%d",variable_name);" for mac os
#include<stdio.h>
int main()
{
    int n;
    FILE*f2,*f3;
    
    f2=fopen("even.txt","w");
    f3=fopen("odd.txt","w");
    printf("enter the elements:");
    do
    {
        scanf("%d",&n);
        if(n%2==0)
        putw(n,f2);
        else
        putw(n,f3);   
    }while(n!=-1);
    fclose(f2);
    fclose(f3);
    
    f2=fopen("even.txt","r");
    printf("even elements in even.txt file are:");
    do{
        n=getw(f2);
        printf("%d ",n);
    }while(n!=-1);
    fclose(f2);

    f3=fopen("odd.txt","r");
    printf("\nodd elements in odd.txt file are:");
    do{
        n=getw(f3);
        printf("%d ",n);
    }while(n!=-1);
    fclose(f3);

    return 0;
}