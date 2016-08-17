#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n,sum=0,m,c,a=0,b=1,i;
    scanf("%lld",&n);
    while(n>0)
        {
        scanf("%lld",&m);
        for(i=1;i<=m;i++)
         {c=a+b;
          if((c%2)==0)
              {
              sum+=c;
          }
          a=b;
          b=c;

        }
        printf("%lld",sum);
        sum=0;
        n--;

        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
