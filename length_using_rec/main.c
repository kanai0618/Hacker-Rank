#include <stdio.h>
#include <stdlib.h>

int main()
{


    long long int x,a[100000],z=1,i;
    scanf("%lld",&x);
    for(i=0;i<x;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        z=z|a[i];
    }
    printf("%lld",z);

}
