#include<stdio.h>
main()
{
	int minutes,seconds;
	float hours;
	
	printf("enter a minutes : ");
	scanf("%d",&minutes);
	
	seconds=minutes*60;
	
	printf("\nin secounds: %d",seconds);
	
	hours=minutes/60;
	
	printf("\nin hours: %.2f",hours);
	

}
