#include<stdio.h>
main()
{
	int r,c;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{	
			if(r%2==0)
			printf(" 1");
			
			else
			printf(" 0");
		}	printf("\n");
	}

}
