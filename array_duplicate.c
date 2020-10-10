#include<stdio.h>
#include<stdlib.h>
main()
{
    char s[100];
    int i,j,n,k;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf(" %c",&s[i]);

    printf("the elements are\n");
    for(i=0;i<n;i++)
    printf("%c ",s[i]);

    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[j]==s[i])
            {
                for(k=j;k<n;k++)
                {
                    s[k]=s[k+1];
                }
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    printf(" %c",s[i]);
}
