/* Implement a Calculator using switch */
#include<stdio.h>
main()
{
    int a,b,num;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation u want\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("addition:: %d+%d=%d ",a,b,a+b);
                break;
        case 2: printf("subtraction:: %d-%d=%d ",a,b,a-b);
                break;
        case 3: printf("Multiplication:: %d*%d=%d ",a,b,a*b);
                break;
        case 4: printf("division:: %d/%d=%d ",a,b,a/b);
                break;
    }
}
