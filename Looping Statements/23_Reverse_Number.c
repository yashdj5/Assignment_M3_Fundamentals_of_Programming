#include<stdio.h>
main()
{
    int rev=0,n,temp,rem;

        printf("\n\n\tEnter  number :  ");
        scanf("%d",&n);

        temp=n;
        for(int i=1;n>0;i++)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;

        }
        printf("\n\t The reversed number of %d is %d",temp,rev);

}
