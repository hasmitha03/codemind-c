#include<stdio.h>
int main()
{
    int h,si,se;
    scanf("%d%d%d",&h,&si,&se);
    if(h>50&&si>60&&se>100)
    {
        printf("10");
    }
    else if(h>50&&si>60)
    {
        printf("9");
    }
    else if(si>60&&se>100)
    {
        printf("8");
    }
    else if(h>50 && se>100)
    {
        printf("7");
    }
    else if(h>50 || si>60 || se>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}