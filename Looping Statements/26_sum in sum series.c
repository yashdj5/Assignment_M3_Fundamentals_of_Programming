#include<stdio.h>
main()
{
    int n;
    long int sum=0;

    printf("\n\n\t Enter any number for printing series :  ");
    scanf("%d",&n);

    printf("\n\n\t The given series is :  \n");
    printf("\n\n\t (1)+ ");
    for(int i=1;i<n-1;i++)
    {
        printf("(");
        for(int j=1;j<=i;j++)
        {

            printf("%d +",j);
        }
        printf("%d)+",i+1);

    }

    printf(" (");
    for(int i=1;i<n;i++)
    {
        printf("%d+",i);
    }
    printf("%d)",n);


    printf("\n\n\t The sum of this series is %d . ",sum);
}

