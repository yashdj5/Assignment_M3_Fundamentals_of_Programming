#include<stdio.h>
main()
{
	int r,c;
	char ch;
	for(r=1;r<=5;r++)
	{	ch='A';
	
		for(c=1;c<=r;c++)
		{		
			printf(" %c",ch++);	
			
		}printf("\n");

	}
}
