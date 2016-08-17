

#include<stdio.h>

long long int fun(long long int x)
{
    if(x==1)
        return 5;
    long long int a[10000],i;
    a[0]=5;
    for(i=1;i<x;i++)
    {
        a[i]=a[i-1]+3*(i-1)+7;
    }
    return a[x-1];
}


int main()
{




    long long int n,flag=0;

    while(flag!=1)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            flag=1;
            break;
        }
        else
        {

            printf("%lld",fun(n));
            printf("\n");
            printf("\n");
        }
    }




}
