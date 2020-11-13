/* program to print ArmStrong Numbers between 1 to 500 */
#include<stdio.h>
main()
{
    int num,temp,sum,r;
    temp=num;
    for(num=1,sum=0;num<=500;num++)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(temp==num)
        printf("%d ",num);
}
