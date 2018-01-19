#include<stdio.h>
int main()
{
	int i,n,k,s=0,ar[100];
	printf("INPUT\n");
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	scanf("%d",&ar[i]);
		
	
	for(i=1;i<=k;i++)
	s=s+ar[i];
	printf("OUTPUT\n");
	printf("%d",s);
}
