#include<stdio.h>

int main()
{
	long int arr[100000],N,i;
	int f=0;
	printf("enter a no  ");
	scanf("%ld",&N);
		printf("enter  numbers\n");
	for(i=0;i<N;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		if(arr[i]==i)		
		{
			f=1;
		printf(" %d ",i);
		}
	}	
	if(f==0)
	printf("-1");
}
	
