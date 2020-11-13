/* palindrome numbers between 1 to 1000 */
#include<stdio.h>
main()
{
    int num,tem,sum=0;
    tem=num;
    for(num=1;num<=1000;num++)
    {
        sum=sum*10+(num%10);
        num=num/10;
    }
    if(tem==sum)
        printf("%d ",sum);
}
