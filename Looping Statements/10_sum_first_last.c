#include<stdio.h>
main()
{
	int n,sum=0;
	
	printf("enter any number:  ");
	scanf("%d",&n);
	
	sum=sum+n%10;
	
	while(n>=10)
	{
		n/=10;
	}sum=sum+n;
	
	printf("sum of given number %d ",sum);
}
