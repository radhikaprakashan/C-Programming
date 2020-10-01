/*program to find the no. of times the character is found in a given string*/
#include<stdio.h>
main()
{
    char s[20],ch;
    int i,j=0;

    printf("Enter the string--\n");
    gets(s);
    printf("Character--\n");
    scanf("%c",&ch);

    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
        {
            j++;
        }
    }
    if(j>0)
    {
        printf("%c is present %d times\n",ch,j);
    }
    else
    {
        printf("%c is not in the string\n",ch);
    }
}
