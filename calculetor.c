//Program to display arithmetic operator using switch case.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,n;
label:	printf("0.Exit\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n");
	printf("enter the choice\n");
	scanf("%d",&n);
	if((n==1)&&(n<=5))
	{
	printf("enter the value of a and b :\n");
	scanf("%d%d",&a,&b);
	}
	while(1)
	{
	switch(n)
	{
		
		case 1:
			c=a+b;
			printf("value is : %d*****************************************\n",c);
			goto label;
//			break;
		case 2:
			c=a-b;
			printf("value is : %d******************************************\n",c);
			goto label;
//			break;
		case 3:
			c=a*b;
			printf("value is : %d******************************************\n",c);
			goto label;
//			break;
		case 4:
			c=a/b;
			printf("value is : %d*******************************************\n",c);
			goto label;
//			break;
		case 5:
			c=a%b;
			printf("value is : %d********************************************\n",c);
			goto label;
//			break;
		case 0:
			exit(0);
		default:
			printf("Please enter the valid data\n");
//			break;
		goto label;
	}
	}
	return 0;
}
