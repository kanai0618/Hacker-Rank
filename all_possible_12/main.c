#include <stdio.h>
#include <stdlib.h>



void rec(char *s,char *y,int m,int n,int i,char *l)
{
    if(m<0||n<0) return ;
    if((m==0)&&(n==0))
    {
        l[i]='\0';
        printf("%s",l);
        printf("\n");
    }
    if(m>0)
    {
        l[i]=s[m-1];
        rec(s,y,m-1,n,i+1,l);
    }
    if(n>0)
    {
        l[i]=y[n-1];
         rec(s,y,m,n-1,i+1,l);
    }

}

int main()
{
    printf("Hello world!\n");
    char s[10]="BA",y[10]="DC";int m=2,n=2,i=0;char l[20];
    rec(s,y,2,2,0,l);
    return 0;
}
