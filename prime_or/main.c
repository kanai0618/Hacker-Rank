#include<stdio.h>


int main()
{
    long long int a[100000],x,n,i,count=0,j;
    scanf("%lld",&n);
    while(n>0)
    {
        scanf("%lld",&x);
        for(i=0;i<x;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<x-1;i++)
        {
            for(j=i+1;j<x;j++)
            {
                if(a[i]>a[j]&&i<j)
                {
                    count++;
                }
            }
        }
        printf("%lld",count);
        printf("\n");
        count=0;
        n--;
    }
}
