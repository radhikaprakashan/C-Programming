#include<stdio.h>
main()
{
    char s[100];
    int i,c=1;

    printf("Enter the string\n");
    gets(s);
    for(i=0;s[i];i++)
    {
        if((s[i]==' ')&&(s[i+1]!=' '))
        {
            c++;
        }
    }
    printf("%d",c);
}
