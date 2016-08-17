#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

   int sum=0;

   int i,j,a[10000],k;
   int n;
   scanf("%d",&n);
   while(n>0)
   {

       scanf("%d",&k);
       for(i=0;i<k;i++)
       {
           scanf("%d",&a[i]);
       }

       for(i=0;i<k;i++)
       {
           for(j=i+1;j<k;j++)
           {
               sum+=((a[i]+a[j])/(a[i]*a[j]));
           }
       }
       printf("%d",sum);
   }
    return 0;
}
