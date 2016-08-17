#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Hello world!\n");


    char s[20]="ABCDEF",s1[20];
    int p=0,k=1,l,i,m=0;


    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
        printf("\n");
    }



    while(k<strlen(s))
    {
        while(p<strlen(s))
        {
            for(i=p;i<k+p;i++)
            {
                s1[m++]=s[i];
            }
            s1[m]='\0';
            for(l=p+k;l<strlen(s);l++)
            {
                printf("%s%c",s1,s[l]);
                printf("\n");
            }
            m=0;
            p++;
        }
        p=0;
        m=0;
        k++;
    }

    return 0;
}
