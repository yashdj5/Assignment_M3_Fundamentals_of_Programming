#include<stdio.h>
main()
{
	int n,e_count=0,o_count=0;
	
	while(n<=5)
	{	
		printf("\n\tenter a numbar: ");
		scanf("%d",&n);
		
		if(n%2==0)
			e_count=e_count+1;
		if(n%2!=0)
			 o_count=o_count+1;
		n++;
		
		
	}printf("\n\n\t even number is %d and odd numbar is %d",e_count,o_count);
	
}
