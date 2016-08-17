#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100],s1[100];
    int i,j,k,count=0,n,p=0;
    printf("Hello world!\n");


    gets(s);
    gets(s1);
    n=strlen(s);



    for(i=0;i<n;i++)
     {
         for(j=i,k=0;k<3&&j<j+2;j++,k++)
         {
             if(s[j]==s1[k])
             {
                 count++;
             }
         }

         if(count==3)
         {
             i=i+2;

             count=0;
         }
         else
         {


             s[p]=s[i];
             p++;

             count=0;
         }

     }
     for(i=0;i<p;i++)
        printf("%c",s[i]);

    return 0;
}
