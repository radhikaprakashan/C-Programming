#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[20],n,i,pos,p;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     printf("\n");

    printf("Enter the position to be inserted\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted\n");
    scanf("%d",&p);
    n++;
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
       a[pos-1]=p;
printf("array elements after %d position deleted is",pos);
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

