#include<stdio.h>
main()
{
	int unit,charge,id,amount,bill,n_bill;
	char srr[20];
	float sur;
	
	
	printf("\n\t------------------------------------------------");
	printf("\n\n\t enter your name: ");
	scanf("%s",&srr[20]);
	printf("\n\t------------------------------------------------");
	printf("\n\n\t enter your customer ID: ");
	scanf("%d",&id);
	printf("\n\t------------------------------------------------");
	printf("\n\n\t enter your unit: ");
	scanf("%d",&unit);	
	printf("\n\t------------------------------------------------");
	
	
	if(unit>=800)
		amount=(unit*2);
		
	
	else if(unit>800 || unit>=600)
		amount=(unit*1.80);
	
	else if(unit>600 || unit>=350)
		amount=(unit*1.50);
	
	else if(unit>350)
		amount=(unit*1.20);	
		
	else
		amount=(265);	
		
	if(bill>=800)	
	sur=bill*18/100;
	printf("your bill is extra 18%:%f",sur);
		
	
	
	
	printf(" your bill is %d",amount);
		
		
}
