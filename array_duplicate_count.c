#include<stdio.h>
#include<stdlib.h>
main()
{
    int s[100];
    int i,j,n,k;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf(" %d",&s[i]);

    printf("the elements are\n");
    for(i=0;i<n;i++)
    printf("%d ",s[i]);

    printf("\n");
int c=1;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(s[j]==s[i])
            {
                c++;
                for(k=j;k<n;k++)
                {
                    s[k]=s[k+1];
                }
                n--;
            }
        }
        printf(" %d ---------- %d times\n",s[i],c);
    }
    //for(i=0;i<n;i++)
    //printf(" %c",s[i]);
}

