/* second largest and second smallest elements of an unsorted array without using any Sorting Technique*/

#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[20],b[20],n,i,j,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        printf("Array elements are...\n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("Second smallest=%d\n",a[1]);
        printf("Second largest=%d\n",a[n-1]);
}
