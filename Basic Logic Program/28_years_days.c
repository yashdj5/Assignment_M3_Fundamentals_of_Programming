#include <stdio.h>
main() 			
{
	
    int year;
	float days,month;
   
    printf("Enter any number of years: ");
    scanf("%d", &year);
    
    month= year * 12;
    
    printf("in month %.2f",month);
    
    days=month*30;
	
	printf("in days %.2f",days); 
    
}
    
    
