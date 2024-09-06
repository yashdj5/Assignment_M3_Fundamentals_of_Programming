#include<stdio.h>
main()
{
	int temp;
	
	printf("show your current tamprechar: ");
	scanf("%d",&temp);
	
	if(temp>=40)
	printf(" then Its Very Hot ");
	
	else if(temp>40 && temp>=30)
	printf(" then Its Hot ");
	
	else if(temp>30 && temp>=20)
	printf(" then Normal in Temp ");
	
	else if(temp>20 && temp>=10)
	printf(" then Cold weather ");
	
	else if(temp>10 && temp>=00)
	printf("  then Very Cold weather ");
	
	else
	printf(" then Freezing weather ");
	
	
}
