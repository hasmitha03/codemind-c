#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int s=(a*(1)+b*(2));
    if(x<=s)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}