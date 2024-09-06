#include<stdio.h>
main()
{	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	int i,o_count,e_count,sum;
	
	printf("enter a number n1: ");
	scanf("%d",&n1);
	printf("enter a number n2: ");
	scanf("%d",&n2);
	printf("enter a number n3: ");
	scanf("%d",&n3);
	printf("enter a number n4: ");
	scanf("%d",&n4);
	printf("enter a number n5: ");
	scanf("%d",&n5);
	printf("enter a number n6: ");
	scanf("%d",&n6);
	printf("enter a number n7: ");
	scanf("%d",&n7);
	printf("enter a number n8: ");
	scanf("%d",&n8);
	printf("enter a number n9: ");
	scanf("%d",&n9);
	printf("enter a number n10: ");
	scanf("%d",&n10);
	
	
	for(i=0;i<=n10;i++)
	{	if(i%2==0)
		printf("\n\teven number: %d",i);
		
		
	}
	for(i=0;i<=n10;i++)
	{	
		e_count+=i;
	}printf(" eveven num %d",e_count);
	
	
	
		for(i=0;i<=n10;i++)
	{	if(i%2!=0)
		printf("\n\todd number: %d",i);
		
		
	}
	for(i=0;i<=n10;i++)
	{	
		o_count+=i;
	}printf(" eveven num %d",o_count);

}	
