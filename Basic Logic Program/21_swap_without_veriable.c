#include<stdio.h>
main()
{	
	int a,b;
	printf("\n\n\t Enter a: ");
	scanf("%d",&a);
	printf("\n\n\t Enter b: ");
	scanf("%d",&b);
	
	printf("before swaping number-----------------------");
	printf("\n\n\t number a %d",a);
	printf("\n\n\t number b %d",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swaping number-----------------------");
	printf("\n\n\t number a %d",a);
	printf("\n\n\t number b %d",b);
}
