#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */
int main()
{
    long long int n,i,a[100000],count;

    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
  count=1;

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        if(a[i]<a[i+1])
        {
            count=count+2;
        }
    }
    printf("%lld",count);
}
