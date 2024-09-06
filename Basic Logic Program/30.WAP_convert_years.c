#include<stdio.h>
main()
{
	int years,days;
	
	
	printf("enter a years : ");
	scanf("%d",&years);
	
	days=years*365;
	
	printf("\nin days: %d",days);
	
	
	years=days/365;
	
	printf("\nin years: %d",years);
	

}
