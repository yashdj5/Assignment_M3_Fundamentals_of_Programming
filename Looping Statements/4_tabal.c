#include<stdio.h>
main()
{
	int i,n;
	
	printf(" enter for tabel: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d= %d",n,i,i*n);
	}
}
