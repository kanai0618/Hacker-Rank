#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    long long int n,i,k=0,count=0,a[100000],j,p,x[100000];
    scanf("%lld",&n);
    while(n>0)
    {
        scanf("%lld",&p);
        for(i=0;i<p;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<p-1;i++)
        {
            for(j=i+1;j<p;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        x[k++]=count*2;
        n--;
        count=0;
    }
for(i=0;i<k;i++)
    printf("%lld\n",x[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
