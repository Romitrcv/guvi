#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("INPUT\n");
	scanf("%d",&n);
	printf("OUTPUT\n");
	for(i=1;i<=n;i++)
	s=s+i;
	printf("%d",s);
}
