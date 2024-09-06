#include<stdio.h>
main()
{
	int i=1,fact=1,n,ctr;
	
	for(ctr=1;ctr<=5;ctr++)
	{
		printf("\n\t enter Factorial: ",ctr);
		scanf("%d",&n);
    
	
			while(i<=n)
			{
				fact=fact*i;
				i++;
			}printf(" \n\n\t the number is %d",fact);
	}
		
}
