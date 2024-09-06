#include<stdio.h>
main()
{
	int week;
	
	printf("enter a week days :");
	scanf("%d",&week);
	
	if(week==1)
		printf("sunday");
	else if(week==2)
		printf("monday");
	else if(week==3)
		printf("tuseday");
	else if(week==4)
		printf("Wednesday");
	else if(week==5)
		printf("Thursday");
	else if(week==6)
		printf("Friday");
	else if(week==7)
		printf("Sunday");
	else
		printf("Invalid Input! Please enter week number between 1-7.");						
}
