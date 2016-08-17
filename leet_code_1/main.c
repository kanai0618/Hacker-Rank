#include <stdio.h>
#include <stdlib.h>

int main()
{


    char s[100];
    s[100]='\0';

    int n=701,i=0,k,m;

     while(n>26)
     {
         k=n%26;n=n/26;
         s[i++]='a'+n-1;
         s[i++]='a'+k-1;




     }
     //printf("%d%d",n,i);
     s[i]='a'+n-1;
     s[i]='\0';

     for(k=i;k>=0;k--)
     {
         printf("%c",s[k]);
     }

    return 0;
}
