/* Program to Find the factorial of a given number */
#include<stdio.h>
main()
{
    int n1=0,n2=1,n3=0,i,num;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("\n%d %d", n1,n2);

    for(i=2;i<num;i++)
    {
        n3=n1+n2;
        printf(" %d ", n3);
        n1=n2;
        n2=n3;
    }

}
