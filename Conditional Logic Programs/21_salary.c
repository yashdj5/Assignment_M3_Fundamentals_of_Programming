#include<stdio.h>
main()
{
	int n;	
	float da,hra,gross;
	printf("enter your monthly salary: ");
	scanf("%d",&n);
	
	if(n<=20000)
	{
		da  = n * 0.9;
		hra = n * 0.25;
    }
	else if(n>20000)
	{	
		da  = n * 0.3;
        hra = n * 0.95;
 	}
		
	else if(n<=10000)
	{
		da  = n * 0.2;
        hra = n * 0.8;
	}
	else		
	{
		da  = n * 0.0;
        hra = n * 0.0;
 	}
	 gross = n + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
}
