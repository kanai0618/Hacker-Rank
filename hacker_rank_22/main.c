#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    long long int a[10000],count[10000]={0},count1[10000]={0},i,j,n,m,b[10000];

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(i=0;i<m;i++)
    {
        count1[b[i]]++;
    }
    for(i=0;i<10000;i++)
    {
        if(count[i]!=0&&count1[i]!=0)
        {
            if(count[i]>count1[i]||count1[i]>count[i])
            {
                printf("%lld\t",i);
            }
        }
    }


    return 0;
}
