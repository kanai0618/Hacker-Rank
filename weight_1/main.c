#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{




    long long int x,y,a[100000],b,c,count=0,q,n,i,d;

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&q);
    while(q>0)
    {
        scanf("%lld%lld%lld",&b,&c,&d);
        if(b==0)
        {
            a[c-1]=d;
        }
        if(b==1)
        {
            for(i=c-1;i<d;i++)
            {
                if((a[i]%2)==0)
                {
                    count++;
                }
            }
            printf("%lld",count);
            printf("\n");
            count=0;
        }
        if(b==2)
        {
            for(i=c-1;i<d;i++)
            {
                if((a[i]%2)!=0)
                {
                    count++;
                }
            }
            printf("%lld",count);
            printf("\n");
            count=0;
        }

        q--;
    }


    return 0;
}
