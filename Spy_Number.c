#include<stdio.h>
int main(){
    int a,s=0,p=1;
    scanf("%d",&a);
    for(;a>0;a=a/10){
        int d=a%10;
        s=s+d;
        p=p*d;
    }
    if(s==p)printf("Spy Number");
    else printf("Not Spy Number");
}