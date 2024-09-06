#include<stdio.h>
main()
{
	int r,c,temp=1;
	
	for(r=1;r<=5;r++)
	{	for(c=1;c<=r;c++)
		{	
			printf(" %d",temp);	
			temp++;	
		}printf("\n");

	}
}
