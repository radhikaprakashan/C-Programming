/*program to compare two strings without using strcmp function*/
#include<stdio.h>
main()
{
    char s1[20],s2[20];
    int i;

    printf("Enter the two strings\n");
    scanf("%s%s",s1,s2);

    for(i=0;s1[i];i++)
    {
        if(s1[i]!=s2[i])
            break;
    }
    if(s1[i]==js2[i])
        printf("same\n");
    else
        printf("Not same\n");
}
