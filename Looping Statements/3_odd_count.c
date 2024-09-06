#include<stdio.h>
main()
{
	int arr[10];
	int i,n,e_count,o_count;
	for(i=0;i<10;i++)
	{
	printf(" enter a number arr[%d]  ",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
			printf(" even number : %d",i);
	}
	for(i=0;i<10;i++)
	{	e_count=e_count+i;
	}	
	printf("total even number %d",e_count);	
}   
