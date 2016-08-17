#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */



int prime(long long int x)
{

    long long int i,count=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
         count++;
            //break;
        }
    }
   if(count==0 && x!= 1)
        return 1;
   else
      return 0;

}


long long int luckyNumbers(long long int a,long long int b) {
   long long int ans=0,k=0,x[10000],l,sum=0,sum1=0,i=a;

   while(i<=b)
   {
       printf("hi");
       while(i>0)
       {

           x[k++]=i%10;
           i=i/10;
       }

       for(l=0;l<k;l++)
       {
           sum+=x[l];
           sum1+=x[l]*x[l];
       }
       //printf("%lld%lld",sum,sum1);
       if(prime(sum)&&prime(sum1))
       {
           ans++;
       }
       sum=0;
       sum1=0;
       k=0;
       i=i+1;
   }

    /* Write your code here */


   return ans;
}

/* Tail starts here */
int main() {
    long long int res;

    int _cases,_a_i;
    long long int _a,_b;
    scanf("%d", &_cases);

    for(_a_i = 0; _a_i < _cases; _a_i++) {
        scanf("%lld %lld", &_a,&_b);
       res = luckyNumbers(_a,_b);
        printf("%lld\n",res);
    }
    return 0;
}
