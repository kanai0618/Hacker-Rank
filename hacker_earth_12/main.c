#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,t,k=1,count=0,flag=0,p=1;

   scanf("%lld",&t);

   while(t>0)
   {
       scanf("%lld",&n);

       while(flag!=1)
       {
           if(k>=n)
           {
               flag=1;
           }
           count++;

           k=2*p;
           p++;

       }
       printf("%lld",count);
       printf("\n");
       count=0;
       k=1;
       p=1;
       flag=0;
       t--;
   }
    return 0;
}
