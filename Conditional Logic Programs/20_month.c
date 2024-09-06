#include<stdio.h>
main()
{
	int month;
	
	printf("please enter a your month: ");
	scanf("%d",&month);
	
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12 )
		printf("\n\n\t There are 31 days in this month . ");
	
	else if(month==2)
		printf("\n\n\t There are 28/29 days in this month . ");
	
	else if(month==4||month==6||month==9||month==11)
		printf("\n\n\t There are 30 days in this month . ");
		
	else
		("\n\n\t Invalid number!!!Please enter between 1 and 12");	
	
/*	switch(month)
	{	case'1':
		case'3':
		case'5':
		case'7':
		case'8':
		case'10' :
		case'12' :printf("\n\n\t There are 31 days in this month . ");
			break;
	}
	
	switch(month)
	{	case'4':
		case'6':
		case'9':
		case'11': :printf("\n\n\t There are 31 days in this month . ");
	}
	default :
			printf("\n\n\t There are 28/29 days in this month")*/
}
