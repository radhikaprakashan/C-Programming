#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[10],n,i,c=0,k,m,b[10];

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array elements are...\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=0,c=0,m=0;i<n;i++)
    {
        for(k=2;k<a[i];k++)
        {
            if(a[i]%k==0)
            break;
        }
        if(k==a[i])
        printf("%d ", b[c]);
        c++;
    }
    printf("count=%d\n",c);

}
