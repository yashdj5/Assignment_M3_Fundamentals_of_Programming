#include<stdio.h>
main()
{
	int n;
	
	printf("enter your amount: ");
	scanf("%d",&n);
	
	if(n>=5000)
	printf("you are in profit %d",n);
	
	else
	printf("you are in loss %d",n);
	
}
