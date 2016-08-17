#include<stdio.h>


long long int fact(long long int x)
{
    long long  int i,fact=1;
    if(x==1)
        return 1;
        if(x==0)
            return 1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;

}

int main()
{
    int n;
    long long int m,k;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld%lld",&m,&k);
        printf("%lld",fact(m));

        printf("%lld",fact(m)/(fact(k)*((fact(m-k)))));
        printf("\n");
        n--;
    }
}
