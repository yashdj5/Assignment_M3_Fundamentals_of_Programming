#include<stdio.h>
main()
{
//	int a=01,b=10;
	
/*	for(a=1;a<=9;a++)
	printf("\t 0%d",a);
	for(a=1;b<=20;b++)
	printf("\t %d",b);*/
	int i;
	for(i=1;i<=20;i++)
	{
	if(i<10)
		printf("\t0%d",i);
	else 
		printf("\t%d",i);
	if(i%10==0)
		printf("\n");	
		
	}
}
