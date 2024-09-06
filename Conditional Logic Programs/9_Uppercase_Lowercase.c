#include<stdio.h>
main()
{
	char ch;
	
	printf(" enter your charater: ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
		printf("%d is uppercase alphabet",ch);
		
	else if(ch >= 'a' && ch <= 'z')	
		printf("%d is lowercase alphabet",ch);
	
	else	
		printf("%d is Digit or Special Character",ch);
}
