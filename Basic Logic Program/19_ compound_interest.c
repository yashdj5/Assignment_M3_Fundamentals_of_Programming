#include<stdio.h>
main()
{	
	int p,r,n,t;
	float A;
	
	printf("\n\n\n\t enter a amount: ");
	scanf("%d",&p);
	printf("\n\n\n\t enter a amount: ");
	scanf("%d",&r);
	printf("\n\n\n\t enter a amount: ");
	scanf("%d",&n);
	printf("\n\n\n\t enter a amount: ");
	scanf("%d",&t);	
	
	A =  p*(1 + r/n)*n*t;
	
	printf("\n\n\t compound interest= %f",A);	
}
