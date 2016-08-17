#include <stdio.h>
#include <stdlib.h>


void print(char *s,int i,int k,int n,char *r)
{
    if(i==n)
    {
        int l;
        for(l=0;l<k;l++)
        {
            printf("%c",r[l]);
        }
        printf("\n");
        return ;
    }
    r[k]=s[i];
    print(s,i+1,k+1,n,r);
    if(k!=0)
    {r[k]=' ';
    r[k+1]=s[i];
    print(s,i+1,k+2,n,r);}

}

int main()
{
    printf("Hello world!\n");
    char s[10]="ABCD",r[10];
    print(s,0,0,4,r);
    return 0;
}
