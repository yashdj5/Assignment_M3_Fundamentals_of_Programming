#include<stdio.h>
main()
{
	int n;
	
	printf("please enter your number:");
	scanf("%d",&n);
	
	n%2==0 ? printf("Number is even ") : printf("Number is odd ");
}
