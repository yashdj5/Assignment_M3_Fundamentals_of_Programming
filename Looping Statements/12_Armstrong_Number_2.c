#include<stdio.h>
main()
{
	int n,rem,sum,temp,i;
	
	printf("enter a Armstrong Number:  ");
	scanf("%d",&n);
	temp=n;
	
	/*while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n/=10;*/
		
	for(i=0;n>0;i++)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n/=10;
	}	
		
	
	if(sum==temp)
		printf("\n\t the number is armstrong number");
	else 
		printf("\n\t the number is not armstrong number");			

}
