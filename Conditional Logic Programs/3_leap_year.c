#include<stdio.h>
main()
{
	int year;
	
	printf("enter a year: ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("this year is leap years");
	}
	else
	{
		printf("this year is not leap year");
	}
}
