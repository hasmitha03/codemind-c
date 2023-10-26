#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int A,B;
    scanf("%d%d",&A,&B);
    A=(x1+y1);
    B=(x2+y2);
    if(A<B)
    {
        printf("%d",A);
    }
    else
    {
        printf("%d",B);
    }
}