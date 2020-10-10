#include<stdio.h>
main()
{
    int i,n,s=0;

    printf("Enter the number of terms\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       printf(" %d",i*i);
       s=s+(i*i);
    }
    printf("\n");4
    printf("%d ",s);
}
