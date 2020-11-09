#include<stdio.h>
main()
{
    int num,pos,n;
    pos=sizeof(int)*8;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=(num&(1<<(pos-1)));
    if(n==0)
        printf("num is positive\n");
    else
        printf("num is negative\n");
}
