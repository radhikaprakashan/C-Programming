/* Program to Find the sum of digits of a given number. */
#include<stdio.h>
main()
{
    int num,sum=0,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(;num;i++)
    {
        sum=sum+(num%10);
        num=num/10;
    }

    printf("%d ",sum);
}
