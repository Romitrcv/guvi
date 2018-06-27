#include<stdio.h>

int main()
{
	char no[20];
	int n,i;
	scanf("%s",&no);
	scanf("%d",&n);
	for(i=n;no[i]!='\0';i++)
	{
		printf("%c",no[i]);
	}
	return 0;
}
