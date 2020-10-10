#include<stdio.h>
#include<stdlib.h>
main()
{
    int s[100],b[100];
    int i,j,n,k,m=0;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf(" %d",&s[i]);

    printf("the elements are\n");
    for(i=0;i<n;i++)
    printf("%d ",s[i]);

    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[j]==s[i])
            {
                b[m]=s[j];
                m++;
                for(k=j;k<n;k++)
                {
                   // b[m]=s[k];
                    s[k]=s[k+1];
                }
                n--;
            }
        }
    }
    printf("\n");
    printf("Repeated elements are\n");
    for(i=0;i<m;i++)
    printf("%d ",b[i]);

}
