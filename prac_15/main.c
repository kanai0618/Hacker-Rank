#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x[100000],a,b,c,i,m,max=-999999,n,k;

    scanf("%lld",&k);
    while(k>0)
    {



    scanf("%lld%lld",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&x[i]);
    }


    while(n>0)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        for(i=b;i<=c;i++)
        {
            if((a^i)>max)
            {
                max=a^i;
            }
        }
        printf("%lld\n",max);
        max=-999999;
        n--;
    }
    k--;
    }
    return 0;
}
