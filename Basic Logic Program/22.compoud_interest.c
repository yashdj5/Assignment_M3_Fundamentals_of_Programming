#include<stdio.h>
main()
{
	int p,r,t;
	float amount,Compound_Interest=0;
	
	printf("/n/n/t Enter p ");
	scanf("%d",&p);
	printf("/n/n/t Enter r ");
	scanf("%d",&r);
	printf("/n/n/t Enter t ");
	scanf("%d",&t);
	
	amount=p*1+r/100*t;
	
	printf("\n\n\t amount is  %.2f",amount);
	
	Compound_Interest=amount-p;
	
	printf("\n\n\t Compound_Interest amount is  %.2f",Compound_Interest);
}
