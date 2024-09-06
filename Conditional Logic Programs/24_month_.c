#include<stdio.h>
main()
{
	int month;
	
	printf("enter a month number :");
	scanf("%d",&month);
	
	if(month==1)
		printf("\n\tjanuary month in 31 days");
	else	if(month==2)
		printf("\n\tfebruary onth in 29/28 days");
	else if(month==3)
		printf("\n\tmarch onth in 31 days");
	else if(month==4)
		printf("\n\tapril onth in 30 days");
	else if(month==5)
		printf("\n\t may onth in 31 days");
	else if(month==6)
		printf("\n\tjune onth in 30 days");
	else if(month==7)
		printf("\n\tjuly onth in 31 days");
	else if(month==8)
		printf("\n\taugust onth in 31 days");
	else if(month==9)
		printf("\n\tseotember onth in 30 days");
	else if(month==10)
		printf("\n\toctomber onth in 31 days");
	else if(month==11)
		printf("\n\tnovember onth in 30 days");
	else if(month==12)
		printf("\n\tdecember onth in 31 days");					
	else
		printf("\n\tInvalid Input! Please enter week number between 1-12.");						
}
