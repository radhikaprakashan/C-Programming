/* C program to  convert a character */
#include<stdio.h>
main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    ch=ch^32;
    printf("%c",ch);
}
