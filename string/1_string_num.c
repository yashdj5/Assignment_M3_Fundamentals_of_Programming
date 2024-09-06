#include<stdio.h>
main()
{
	char str[30]="AHMEDABAD";
	int i,n,count;
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n\n\t %c",str[i]);
		count=count+1;
	}printf("\n\n\t enter %d",count);
}
