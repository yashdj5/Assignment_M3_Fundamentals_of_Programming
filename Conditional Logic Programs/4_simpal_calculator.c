#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	char choice;
	
	printf("please enter any value:  ");
	scanf("%d %d",&a,&b);
	
	printf("\n\n\n\t ----------------------------------");
	printf("\n\tplease press  + for addition");
	printf("\n\tplease press  - for subtraction");
	printf("\n\tplease press  * for multiplication");
	printf("\n\tplease press  / for divison");
	printf("\n\tplease press  %% for modulo");
	printf("\n\n\t Press e for Exit ");
	printf("enter your choice : ");
	scanf(" %c",&choice);
	
	if(choice=='+')
		printf("addition %d",a+b);
	else if(choice=='-')
		printf("subtraction %d",a-b);
	else if(choice=='*')
		printf("multiolication %d",a*b);
	else if(choice=='/')
		printf("divison %d",a/b);
	else if(choice=='%')
		printf("modulo %d",a%b);
	else if(choice=='e')
		exit(0);
	else
		printf("plase try again...you choice worng option");
}
