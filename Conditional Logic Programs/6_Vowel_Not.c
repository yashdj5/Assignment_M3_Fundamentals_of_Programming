#include<stdio.h>
main()
{
	char ch;	
	printf("please enter any number ");
	scanf("%c",&ch);
	
	if (ch=='a' || ch=='A'||ch=='e' || ch=='E'||ch=='i' || ch=='I'||ch=='o' || ch=='O'||ch=='u' || ch=='U')	
	{
		printf("character is vewel %c",ch);
	}
	else
	{
		printf("character is consonant %c",ch);
	}
	
}
