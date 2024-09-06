#include<stdio.h>
main()
{
	int month;
	
	printf("enter a month number :");
	scanf("%d",&month);
	
	if(month==1)
		printf("\n\tjanuary");
	else	if(month==2)
		printf("\n\tfebruary");
	else if(month==3)
		printf("\n\tmarch");
	else if(month==4)
		printf("\n\tapril");
	else if(month==5)
		printf("\n\t may");
	else if(month==6)
		printf("\n\tjune");
	else if(month==7)
		printf("\n\tjuly");
	else if(month==8)
		printf("\n\taugust");
	else if(month==9)
		printf("\n\tseotember");
	else if(month==10)
		printf("\n\toctomber");
	else if(month==11)
		printf("\n\tnovember");
	else if(month==12)
		printf("\n\tdecember");					
	else
		printf("\n\tInvalid Input! Please enter week number between 1-12.");						
}
