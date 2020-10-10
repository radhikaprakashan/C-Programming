#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[20],n,i,pos;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     printf("\n");

    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
        for(i=pos-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
printf("array elements after %d position deleted is",pos);
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
