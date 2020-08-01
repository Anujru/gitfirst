//write a program to reverse the given number

#include<stdio.h>

int main(void)
{
	int n,a,r=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>=1)
	{
//		printf("anuj\n");
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	printf("the revers number is : %d",r);
	return 0;
}
