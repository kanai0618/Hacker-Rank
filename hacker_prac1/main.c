#include <stdio.h>
#include <stdlib.h>


int main()
{
    long long int n,f=1,bot,k,a[100000],i,count=0,sum=0,max=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        //sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
k=max;

    while(f==1)
    {
        bot=k;
        for(i=0;i<n;i++)
        {
            if(a[i]>bot)
            {
                if(bot>=0)
                {
                    bot=bot-a[i];
                    count++;
                }
            }
            else
            {
                if(bot>=0)
                {
                    bot+=bot-a[i];
                    count++;
                }
            }
        }
        if(count==n)
        {
            printf("%lld",k);
            f=0;
        }
        else
        {
            k=k+1;
            count=0;
        }

    }
    return 0;

}
