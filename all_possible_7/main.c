#include <stdio.h>
#include <stdlib.h>

void rec(char *s,int *a,int m)
{
    if(m<=-2) return ;
    if(m==-1)
    {

        printf("%s\n",s);

        return ;
    }
    s[a[m]]='a';
    rec(s,a,m-1);
    s[a[m]]='b';
    rec(s,a,m-1);


}


int main()
{
    printf("Hello world!\n");
    char s[10]="A?B?C?";
    int a[3]={1,3,5};
    rec(s,a,2);

    return 0;
}
