#include<stdio.h>
main()
{
    char s[20];
    int i,j;
    printf("Enter the String : ");
    scanf("%s",s);

    for(i=0;s[i];i++);

    for(i=i-1,j=0;i>j;i--,j++)
    {
        if(s[i] != s[j])
        break;
    }
    if(s[i]==s[j])
        printf("Palindrome\n");
    else
        printf("Not a Palindrome...\n");
}
