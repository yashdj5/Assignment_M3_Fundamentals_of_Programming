#include<stdio.h>
main()
{
	int n;
	
	printf("enter a number: ");
	scanf("%d",&n);
	
	if(n>=1)
	printf("your number is positive ");
	
	else if(n<=-1)
	printf("your number is negative ");
	
	else
	printf("your number is zero ");
	
}
