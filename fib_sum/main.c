#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    long long int n,k,i,m,c,b=1,a=0,x[100000],l,sum=0;
    scanf("%lld",&n);
    x[0]=0;
    x[1]=1;

    while(n>0)
    {
        scanf("%lld%lld",&m,&k);

        for(i=2;i<=k;i++)
        {
            c=a+b;
            //printf("%d\n",c);
            x[i]=c;

            a=b;
            b=c;

        }
        for(l=m;l<=k;l++)
        {
            sum+=x[l];
        }
        printf("%lld",(sum)%1000000007);
        printf("\n");
        sum=0;
        a=0;
        b=1;
        n--;

    }
    return 0;
}
