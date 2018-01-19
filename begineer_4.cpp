#include<stdio.h>
int main()
{
	char c;
	printf("INPUT\n");
	scanf("%c",&c);
	printf("OUTPUT\n");	
	if(c>65&&c<90||c>95&&c<122)
	{
		printf("Alphabet");
		
	}
	else 
	{
		printf("No");
	}
	return 0;
}
