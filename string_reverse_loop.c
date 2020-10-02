#include<stdio.h>
main()
{
    char s[20],ch;
    int i,j;
    printf("Enter the string\n");
    scanf("%s",s);
    for(i=0;s[i];i++);

    for(i=i-1,j=0;i>j;i--,j++)
    {
        ch=s[i];
        s[i]=s[j];
        s[j]=ch;
    }
    printf("%s",s);
}
