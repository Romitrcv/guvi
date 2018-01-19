#include<stdio.h>
int main()
{
	int n;
	printf("INPUT\n");
	scanf("%d",&n);
	printf("OUTPUT\n");
	if((n%4==0 && n%100!=0) || n%400==0)
		printf("yes");
	else 
		printf("no");
return 0;
}
