/* biggest number of  three variables using if-else ladder */
#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is large\n",a);
    else if(b>a && b>c)
        printf("%d is larger\n",b);
    else
        printf("%d is larger\n",c);
}
