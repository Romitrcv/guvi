#include<stdio.h>
int main()
{
	char c;
	printf("INPUT\n");
	scanf("%c",&c);
printf("OUTPUT\n");
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("Vowel");
		
	}
	else if(c>65&&c<90||c>95&&c<122)
	{
		printf("Consonant");
	}
}
