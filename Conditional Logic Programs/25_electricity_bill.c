#include<stdio.h>
main()
{
	int unit,bill,sur,t_bill;
		
	printf("please enter your unit in number: ");
	scanf("%d",&unit);
	
	if(unit<=251)
	{
		bill=unit*1.5;
	}
	if(unit<=250)
	{
		bill=unit*1.2;
	}
	if(unit<=100)
	{
		bill=unit*0.75;
	}
	if(unit<=50)
	{
		bill=unit*.5;
	}
	sur=bill*0.2;
	t_bill=bill+sur;
	printf("\n\tenter your bill %d",t_bill);	
	
	 
}
