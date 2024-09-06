#include<stdio.h>
main()
{
	int x,p1,p2,p3;
	printf("enter x: ");
	scanf("%d",&x);
	
	p1=x*1;
	p2=x*x;
	p3=x*x*x;
	
	printf("\nN^1= %d",p1);
	printf("\nN^2= %d",p2);
	printf("\nN^3= %d",p3);
}
