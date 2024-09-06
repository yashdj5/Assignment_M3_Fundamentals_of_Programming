#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n\tenter a Multiplication tabale: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\t%d * %d = %d",n,i,n*i);
	}
	
}
