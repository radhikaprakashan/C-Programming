/* program to find vowels in a given string*/
#include<stdio.h>
main()
{
    char s[20];
    int i,c=0;

    printf("Enter the string\n");
    scanf("%s",s);

    for(i=0;s[i];i++)
    {
        if(s[i]=='a'|| s[i]=='A'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='o'|| s[i]=='O'|| s[i]=='u'|| s[i]=='U')
        c++;
    }
    printf("%d\n",c);
}
