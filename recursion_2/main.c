#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void rec(char s[],int i,char x,char s1[])
{

    if(s[i]=='?')
    {
        s1[i]=x;
        if(i==strlen(s)-1)
        {


        printf("%s\n",s1);
        }

        //printf("\nhi");
    }
    else
    {
        s1[i]=s[i];
    }
    if(i<strlen(s))
    {


    rec(s,i+1,'l',s1);

    rec(s,i+1,'o',s1);
    }

}

int main()
{
    printf("Hello world!\n");
    char s[200]="a?b?c?",s1[199];
    rec(s,0,'l',s1);
    return 0;
}
