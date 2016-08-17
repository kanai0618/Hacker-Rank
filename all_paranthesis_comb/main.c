#include <stdio.h>
#include <stdlib.h>


void print(char *s,int open,int close,int k,int n)
{
    if(k>n)
        return ;
        if(close>open)
            return ;
    if((k==n))
    {
        int l;
        for(l=0; l<n; l++)
        {
            printf("%c",s[l]);
        }
        printf("\n");
        return ;
    }
    if(open<n/2)
    {
        s[k]='(';
        print(s,open+1,close,k+1,n);
    }
    if((close<n/2))
    {
        s[k]=')';
        print(s,open,close+1,k+1,n);
    }

}

int main()
{
    printf("Hello world!\n");
    char s[100];
    print(s,0,0,0,10);
    return 0;
}
