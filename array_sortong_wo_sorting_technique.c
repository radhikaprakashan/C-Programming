/*find the biggest and smallest number in an Unsorted array without using any Sorting Technique*/
#include<stdio.h>
main()
{
    int a[10],n,s,l,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("The elements are\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");

    s=l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<s)
        s=a[i];

        if(a[i]>l)
        l=a[i];
    }
    printf("%d %d\n",s,l);

}

