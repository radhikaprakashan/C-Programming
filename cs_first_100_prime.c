/* program to print first 100 prime numbers */
#include<stdio.h>
main()
{
    int num,i,c=0;
    for(num=0;num<=100;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            break;
        }
            if(i==num)
                printf("%d ",num);
    }
}

