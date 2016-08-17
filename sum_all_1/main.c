#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int t,sum=0,i,n,sum2,sum1;
    scanf("%lld",&t);


    while(t>0)
    {
        scanf("%lld",&n);

        for(i=1;i<=n/2;i++)
        {
            sum+=i*(n/i);
        }

        sum1=n*(n+1)/2;
        sum2=sum1-((n/2)*((n/2)+1))/2;
        printf("%lld",(sum2+sum)%1000000007);
        printf("\n");
        sum=0;
        t--;

    }
    return 0;
}
