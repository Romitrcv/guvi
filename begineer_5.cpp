#include<stdio.h>
int main()
{
	int n,m,l;
	printf("INPUT\n");
	scanf("%d",&n);
	scanf("%d",&l);
	scanf("%d",&m);
	printf("OUTPUT\n");
	
	if(n>l){
		if(n>m)
		printf("%d",n);
		else
		printf("%d",m);
	}
	else if(l>m){
		printf("%d",l);
		}
	else
	printf("%d",m);
return 0;
}
