#include <stdio.h>
#include <stdlib.h>

long long int max(long long int a,long long int b)
{
    if(a<b)
        return a;
    else
        return b;
}



long long int max1(long long int a,long long int b,long long int c)
{
    if(a<max(b,c))
        return a;
    if(b<max(a,c))
        return b;
    if(c<max(a,b))
        return c;
}


int main()
{
   long long int a,n,sum,b,c,z;

   scanf("%lld",&n);

   while(n--)
   {
       scanf("%lld%lld%lld",&a,&b,&c);
       sum=a+b+c;z=max1(a,b,c);
       printf("%lld\t%lld",z,(sum/z)%1000000007);
       sum=0;
       printf("\n");





   }


}
