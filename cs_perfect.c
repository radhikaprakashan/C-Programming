/* given number is Perfect number or not? */
#include<stdio.h>
main()
{
    int num,i,r,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(i=1;i<=(num-1);i++)
    {
        r=num%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        printf(" %d is a perfect number\n",sum);
    else
        printf("Not a perfect number\n");
}
