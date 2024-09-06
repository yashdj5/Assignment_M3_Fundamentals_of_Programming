#include<stdio.h>
main()
{
	int n1,n2,n3,a,b,c;
	
	printf("\n\n\t Enter 1 number :  ");
    scanf("%d",&n1);
    printf("\n\n\t Enter 2 number :  ");
    scanf("%d",&n2);
    printf("\n\n\t Enter 3 number :  ");
    scanf("%d",&n3);
    
    if(a>b)
    	
    	if(a>c)
    		printf("\n\t number is large :%d",a);
    		
    	else
			printf("\n\t number is large :%d",b);
			
	else
		
		if(b>c)
			printf("\n\t number is large :%d",c);			
			
    	else
			printf("\n\t all number are equal");
		
}
