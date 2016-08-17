#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Hello world!\n");
    int i,j,count=0,count2=0,h[200]={0};

    char s[200];
    scanf("%s",s);


    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            h[s[i]]++;
        }
    }
    for(i=97;i<=122;i++)
    {
        if(h[i]!=0)
        {
            if(h[i]!=2)
            {
                printf("not");
                break;
            }
        }
    }
    return 0;
}
