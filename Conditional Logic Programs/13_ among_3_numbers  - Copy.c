#include<stdio.h>
main()
{
	int a,b,c;
	int max;
	
	printf("enter Number a:  ");
	scanf("%d",&a);
	
	printf("enter Number b:  ");
	scanf("%d",&b);
	
	printf("enter Number c:  ");
	scanf("%d",&c);
	
 max = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
 
 	printf("number is %d max",max);
	
	
}
