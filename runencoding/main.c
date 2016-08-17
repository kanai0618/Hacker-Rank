#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    printf("Hello world!\n");

    char s[100];
    int count=0,i,k=0;
    scanf("%s",s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            s[k++]=s[i];
            s[k++]=count+48+1;
            //printf("%c",s[k+1]);

            //k=k+1;
            count=0;
        }
    }
    //printf("%d",k);
    for(i=0;i<k;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
