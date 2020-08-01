//Write a program to print the star sequence
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n :");
	scanf("%d",&n);
	for(i=n; i>=0; i--)
	{
		for(j=i; j>=0; j--)
		printf("*");
		printf("\n");
	//	if(i==0)
	}
	for(i=1; i<=n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
