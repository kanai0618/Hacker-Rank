#include <stdio.h>
#include <stdlib.h>

int main()
{

    int p,b,n,m,i;
   unsigned long long  a[100000],k,sum=0;



    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        a[i]=0;
    }

    while(m>0)
    {
        scanf("%d%d%llu",&p,&b,&k);
        for(i=p-1;i<b;i++)
        {
            a[i]+=k;
        }
        m--;
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%llu",sum/n);
    return 0;
}
