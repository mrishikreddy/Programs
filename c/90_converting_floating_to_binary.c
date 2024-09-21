#include<stdio.h>
int main()
{
    int a[50],b[50],intpart,i=0,rem;
    float f,floa;
    printf("enter a number:");
    scanf("%f",&f);
    intpart=(int)f;
    printf("interger part is:");
    printf("%d",intpart);
    floa=f-intpart;
    printf("\nfractional part is:");
    printf("%.2f",floa);
    printf("\nthe number in binary form is:");
    while(intpart>0)
    {
        rem=intpart%2;
        intpart=intpart/2;
        a[i]=rem;
        i++;
    }
    i--;
    for(;i>=0;i--)
    printf("%d",a[i]);
    printf(".");
    i=0;
    while(floa!=0.0)
    {
        floa=2*floa;
        intpart=(int)floa;
        b[i]=intpart;
        floa=floa-intpart;
        i++;
    }
    i--;
    for(;i>=0;i--)
    printf("%d",b[i]);

    return 0;

}