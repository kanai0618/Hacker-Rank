#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,count=0,i,p,m,x[10000],k=0,j=0,l,a[10000],count1=0;
scanf("%d",&n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

       while(n>0)
       {
           scanf("%d%d",&p,&m);
           for(l=0;l<m;l++)
           {
               scanf("%d",&a[l]);
           }

           for(i=1;i<=p;i++)
           {
               for(j=0;j<m;j++)
               {
                   if((i%a[j])==0)
                   {
                       count1++;
                   }

               }



               if(count1==m)
               {
                   count++;
               }
               ;
           count1=0;

           }
           x[k++]=count;
           count=0;

           n--;
       }
       for(i=0;i<k;i++)
        printf("%d",x[i]);


    return 0;
}
