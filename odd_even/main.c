#include <stdio.h>
#include <stdlib.h>


int max1(int x,int y)
{
    if(x>y) return x;
    else
        return y;
}

int lcs(char *s,char *y,int m,int n)
{
    if((m<0)||(n<0)) return 0;
    if((m==0)&&(n==0)) return 0;

    if(s[m-1]==y[n-1])
        return 1+lcs(s,y,m-1,n-1);
    else        return max1((lcs(s,y,m-1,n)),((lcs(s,y,m,n-1))));
}


int main()
{
    printf("Hello world!\n");

    char s[10]="ABCDGH",y[10]="AEDFHR";
    int m=6,n=6;

    printf("%d",lcs(s,y,m,n));
    return 0;
}
