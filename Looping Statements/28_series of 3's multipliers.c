#include<stdio.h>
main()
{
    int n,s1=1,s2=2;

    printf("Enter the last number of series :  ");
    scanf("%d",&n);

    printf("\n\n\t The series is :  ");
    printf("%d %d ",s1,s2);

    for(int i=1;i<n/2;i++)
    {
        s1*=3;
        s2*=3;
        printf("%d ",s1);
        printf("%d ",s2);
    }



}

