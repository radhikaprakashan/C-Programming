/*****************addition of even numbers and product of odd numbers.****************/
#include<stdio.h>
main()
{
    int a[10],e[10],o[10],i,j,k,s=0,p=1;

    printf("Enter the elements\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("The elements are\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);

    for(i=0,j=0,k=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            e[j]=a[i];
            s=s+e[j];
            j++;
        }
        else
        {
            o[k]=a[i];
            p=p*o[k];
            k++;
        }
    }
    printf("sum of even numbers=%d product of odd numbers=%d\n",s,p);
}
