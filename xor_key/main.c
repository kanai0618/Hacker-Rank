#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int i,k,x,y,m,p,a[100000],j,max=-999999;
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld%lld",&m,&p);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<p;i++)
        {
            scanf("%lld%lld%lld",&k,&x,&y);
            for(j=x-1;j<y;j++)
            {
                if((a[j]^k)>max)
                {
                    max=a[j]^k;
                }
            }
            printf("%lld",max);
            printf("\n");
            max=-999999;

        }
        n--;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
