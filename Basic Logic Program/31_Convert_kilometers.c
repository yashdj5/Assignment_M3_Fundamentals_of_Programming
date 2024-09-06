#include<stdio.h>
main()
{
	int meter;
	float kilometer;
	
	printf("enter kilometer: ");
	scanf("%f",&kilometer);
	
	meter=kilometer*1000;
	
	printf("meter is; %d",meter);
}
