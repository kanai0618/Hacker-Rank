#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int x,k;
    double sum,sum1;
    int n;

    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld",&k);
        sum=ceil(2*k*(k+1)/2);


        sum1=ceil((k-1)*(k)/2);

        printf("%lld",(long long int)(sum+sum1));
        printf("\n");
        n--;
    }
}
