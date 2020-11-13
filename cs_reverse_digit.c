/* Program to reverse the digits of a given number */
#include<stdio.h>
main()
{
    int num,sum=0,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(;num;i++)
    {
        sum=(sum*10)+(num%10);
        num=num/10;
    }

    printf("%d ",sum);
}
