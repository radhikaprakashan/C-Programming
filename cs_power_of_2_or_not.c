/* given number is power of 2 or not */
#include<stdio.h>
main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num&(num-1))
    {
        printf("Not a power of 2\n");
    }
    else
        printf("Power of 2\n");
}
