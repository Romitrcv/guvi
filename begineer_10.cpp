#include<stdio.h>
int main()
{
	int i,n,d=0;
	printf("INPUT\n");
	scanf("%d",&n);
	for(;n!=0;n=n/10,d++);
	printf("OUTPUT\n");
	printf("%d",d);
return 0;
}
