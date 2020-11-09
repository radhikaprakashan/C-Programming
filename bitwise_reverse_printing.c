#include<stdio.h>
main()
{
    int num,m,n,i,j,pos;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The number before reverse printing=%d\n",num);
    for(pos=7;pos>=0;pos--)
        printf("%d ",num >>pos&1);
    for(i=0,j=7;i<j;i++,j--)
    {
        m=num>>i&1;
        n=num>>j&1;
        if(m!=n)
        {
            num=num^1<<i;
            num=num^1<<j;
        }
    }
     printf("The number before reverse printing=%d\n",num);
     for(pos=7;pos>=0;pos--)
        printf("%d ",num >>pos&1);
}
