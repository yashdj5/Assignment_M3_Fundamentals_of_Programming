#include<stdio.h>
main()
{
	int height;
	
	printf("enter a your height: ");
	scanf("%d",&height);
	
	if(height>=210)
	printf("your height is too long",height);
	
	else if(height>=167)
	printf("your height is  long",height);
	
	else if(height>=210)
	printf("your height is short",height);
	
	else
	printf("your height is too short",height);
	
}
