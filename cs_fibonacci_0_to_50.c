/* fibonacci series between 0 to 50 */
#include<stdio.h>
main()
{
    int num1=0, num2=1,num3=0,i,num;
   // printf("Enter the number\n");
    //scanf("%d",&num);
    printf("%d %d ",num1,num2);
    for(i=2;num1+num2<50;i++)
    {
        num3=num1+num2;
        printf(" %d ",num3);
        num1=num2;
        num2=num3;

    }

}
