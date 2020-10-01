/* to find the length of string using pointer*/
#include<stdio.h>
main()
{
    char s[20],*p;
    int i=0;
    printf("Enter the string\n");
    gets(s);
    p=s;
    for(i=0;*p;p++,i++);
    printf("Length=%d\n",i);
}
