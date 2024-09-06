#include<stdio.h>
main()
{
    int n1,n2,n3,sum;

    printf("\n\n\t Enter the value of the angle 1 :  ");
    scanf("%d",&n1);
    printf("\n\n\t Enter the value of the angle 2 :  ");
    scanf("%d",&n2);
    printf("\n\n\t Enter the value of the angle 3 :  ");
    scanf("%d",&n3);

    sum=n1+n2+n3;

    if(sum==180)
        printf("\n\n\tYou can make triangle with given angle values . ");
    else
        printf("\n\n\tYou can not make triangle with given angle values . ");
}
