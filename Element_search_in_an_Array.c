#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a,found=0;
	scanf("%d",&a);
	for(i=0;i<n;i++)
    {
    	if(arr[i]==a)
		{
    	found =1;
    	break;
		}
	}
	if (found ==1) printf("True");
	else printf("False");	
}