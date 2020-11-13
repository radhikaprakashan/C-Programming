/* binary of a given number( +ve or -ve numbers)*/
#include<stdio.h>
main()
{
    int num,pos;
    pos=sizeof(int)*8;
    printf("Enter the number\n");
    scanf("%d",&num);
   for(pos=7;pos>=0;pos--)
   {
       printf("%d ",(num >>pos&1));
   }

}

