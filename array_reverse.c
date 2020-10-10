#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[20],b[20],n,i,j,temp;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    for(i=0;i<n;i++);
    printf("i=%d\n",i);
    for(i=i-1;i>=0;i--)
        printf("%d ",a[i]);
}
