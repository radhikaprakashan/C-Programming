/*one line code to copy the string into another buffer*/
main()
{
    char s[20],d[20],*cp=s,*dp=d;
    int i;
    printf("Enter String : \n");
    scanf("%s",s);
    for(;*dp++=*cp++;);
    printf("New : %s\n",d);
}
