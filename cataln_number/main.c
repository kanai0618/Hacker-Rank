#include <stdio.h>
#include <stdlib.h>

int cataln(int n)
{
    int res=0,i;
    if(n<=1)
        return 1;


    for(i=0;i<n;i++)
    {
        res+=cataln(i)*(cataln(n-i-1));
    }
    return res;
}

int main()
{
    printf("Hello world!\n");
    printf("%d",cataln(5));
}
