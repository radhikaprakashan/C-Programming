#include<stdio.h>
main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num&1?printf("odd\n"):printf("even\n");
}
