#include<stdio.h>
main()
{	
	int salary;
	float loan,insurance,remain;
	printf("\n\n\t please enter salary");
	scanf("%d",&salary);
	
	loan=salary*10/100;
	insurance=salary*10/100;
	
	remain=salary-loan-insurance;
	
	printf("\n the remain salary after is %f. insurance %f,lone is %f ",remain,insurance,loan);
}	

