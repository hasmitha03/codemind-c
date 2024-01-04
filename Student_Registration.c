#include<stdio.h>
int main()
{
    int t,n,k,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(m-k>=n)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}