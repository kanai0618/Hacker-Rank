#include <stdio.h>
#include <stdlib.h>
long long int maxProd(long long int n)
{
   // n equals to 2 or 3 must be handled explicitly
   if (n == 2 || n == 3) return (n-1);

   // Keep removing parts of size 3 while n is greater than 4
   int res = 1;
   while (n > 4)
   {
       n -= 3;
       res *= 3; // Keep multiplying 3 to res
   }
   return (n * res); // The last part multiplied by previous parts
}
int main()
{
    long long int x,a[10000],sum=0,avg,product=1,i;

    scanf("%lld",&x);


    for(i=0; i<x; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<x; i++)
    {
        sum+=a[i];

    }

    printf("%lld",maxProd(sum));


    return 0;
}
