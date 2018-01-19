#include<stdio.h>

#include <stdlib.h>

int main() 
{
    long int arr[100000],n,i,j,no=0,temp; 
    scanf("%d", &n);
     for(i = 0; i < n; i++)
       scanf("%ld",&arr[i]);
	 
	 for (i = 0; i < n-1; i++)      
		for (j = 0; j < n-i-1; j++) 
           if (arr[j] < arr[j+1])
              {	temp =arr[j+1];
			  	arr[j+1]=arr[j];
			  	arr[j]=temp;
			  }
	for(i = 0; i < n; i++)
    	no=(no*10)+arr[i];
    	
    	printf("%ld",no);
}
