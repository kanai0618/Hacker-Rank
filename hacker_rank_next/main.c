#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int a[1000],t,k=0,b[1000],i;

    int n=25,count=0;
    while(n>0)
    {
        count++;
        n=n>>1;
    }
    printf("%d",(int)pow(2,count-1));

    return 0;
}
