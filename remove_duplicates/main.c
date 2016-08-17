#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void swap(char *s,char *y)
{

    char temp;
    temp=*s;
    *s=*y;
    *y=temp;
}


int main()
{

    char s[100];
    int n,i,j;
    printf("Hello world!\n");


    gets(s);
    n=strlen(s);


    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                swap(&s[j],&s[n-1]);
                n=n-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }



    return 0;
}
