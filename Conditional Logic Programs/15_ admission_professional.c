#include<stdio.h>
main()
{
	int Maths,Physics,Chemistry,sum1,total;
	
	
	printf("enter your maths marks ");
	scanf("%d",&Maths);
	
	printf("enter your Physics marks ");
	scanf("%d",&Physics);
	
	printf("enter your Chemistry marks");
	scanf("%d",&Chemistry);
	
	sum1= Maths+Physics+Chemistry;
	
	printf("total marks of three  %d",sum1);
	
	if(Maths>=65 && Physics>=55 && Chemistry>=50)
		printf("\n\n\t The student is for the eligible . ");
	
	else
		printf("\n\n\t The student is not eligible for the course . ");	
}
