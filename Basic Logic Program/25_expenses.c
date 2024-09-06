#include<stdio.h>
main()
{	
	int expense5,expense1,expense2,expense3,expense4,sum;
	
	float average;
	
	printf("\n\n\t enter expense 1:  ");
	scanf("%d",&expense1);
	
	printf("\n\n\t enter expense 2:  ");
	scanf("%d",&expense2);
	
	printf("\n\n\t enter expense 3:  ");
	scanf("%d",&expense3);
	
	printf("\n\n\t enter expense 4:  ");
	scanf("%d",&expense4);
	
	printf("\n\n\t enter expense 5:  ");
	scanf("%d",&expense5);
	
	sum=expense1+expense2+expense3+expense4+expense5;
	
	printf("total expense is %d",sum);
	
	average=sum/5;
		printf("total average is %f",average);

	}
