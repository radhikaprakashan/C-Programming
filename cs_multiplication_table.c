/* print multiplication tables from 10 to 20 */
#include<stdio.h>
/*
main()
{
    int num,i,mul=1;
    //printf("Enter the number for multiplication\n");
    //scanf("")
    for(num=10;num<=20;num++)
    {
        for(i=1;i<=10;i++)
        {
            mul=num*i;
            printf("%d *%d =%d\n",num,i,mul);
        }
    }
}
*/
#include<stdio.h>
main()
{
    int num,i,mul=1;
    printf("Enter the number for multiplication\n");
    scanf("%d",&num);


        for(i=1;i<=10;i++)
        {
            mul=num*i;
            printf("%d *%d =%d\n",num,i,mul);
        }


}
