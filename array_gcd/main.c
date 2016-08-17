#include <stdio.h>
#include <stdlib.h>
long long gcd(long long a,long long b)
{

    if(b==0)
return a;
else
return gcd(b,a%b);

}


long long int fib(long long int n)
{
   long long int a = 0;
    long long int b = 1;
    while (n-- > 1) {
        long long int t = a;
        a = b;
        b += t;
    }
    return b;
}

int main()
{


    long long int n,a[10000];long long int res,i;
    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    res=fib(a[0]);
    for(i=1;i<n;i++)
    {
        res=gcd(res,fib(a[i]));
    }
    printf("%lld",res);

    return 0;
}
