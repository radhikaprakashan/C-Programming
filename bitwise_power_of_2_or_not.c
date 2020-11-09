#include<stdio.h>
main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num&(num-1)? printf("not a power of 2\n"):printf("power of 2\n");
}
