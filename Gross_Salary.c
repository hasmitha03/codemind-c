#include<stdio.h>
int main()
{
    float b,hra,da,gross;
    scanf("%f",&b);
    if (b<=10000)
    {
        hra=(b*0.2);
        da=(b*0.8);
    }
    else if(b<=20000)
    {
        hra=(b*0.25);
        da=(b*0.9);
    }
    else
    {
        hra=(b*0.3);
        da=(b*0.95);
    }
    gross = b+hra+da;
    printf("%.2f",gross);
}