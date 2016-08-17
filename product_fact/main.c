#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,ans=1,fact=1,i,m=109546051211;
    scanf("%lld",&n);
    if(n>=587117)
    {
        printf("0");
    }
    else
    {



        for(i=1; i<=n; i++)
        {
            fact=(fact*i)%m;
            ans=(ans*fact)%m;

        }

        printf("%lld",ans);
    }


    return 0;
}
