#include<stdio.h>
main()
{
	int n,i,sum=1;
	
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		printf("(%d * %d)",i,i);
		sum=sum+1*i*i;
	}
	sum+=(n*n);
    printf("(%d * %d)",n,n);

    printf("\n\n\t The sum of this series is %d . ",sum);
	
}
