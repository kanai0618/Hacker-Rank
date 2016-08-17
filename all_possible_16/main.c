#include <stdio.h>
#include <stdlib.h>



void print(char *a,int i,int n,char *s)
{
    if(i>n)
        return ;
    //if(i>strlen(a))
        //return ;
    if(i==n)
    {
        int k=0;
        for(k=0;k<n;k++)
        {
            printf("%c",s[k]);
        }
        printf("\n");
        return ;
    }
    s[i]='a';
    print(a,i+1,n,s);
    s[i]='b';
    print(a,i+1,n,s);



}

int main()
{
    printf("Hello world!\n");
    char s[10],a[10];
    print(a,0,4,s);
    return 0;
}
