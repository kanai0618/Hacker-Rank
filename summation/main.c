#include <stdio.h>
#include <stdlib.h>
#include<math.h>


long long int fact(long long int x)
{
    long long int c;
    long long int fact=1;
    for (c = 1; c <=x ; c++)
        fact = fact * c;
    return fact;
}

int main()
{

    long long int k,i,r,m;
    int n,count=0,j;

    scanf("%d",&n);

    while(n>0)
    {
        scanf("%lld%lld",&m,&r);
        for(j=0; j<=m; j++)
        {
            k=fact(m)/(fact(j)*fact(m-j));

            if((k%r)==0)
            {
                count++;
            }
        }
        printf("%d",count);
        count=0;
        n--;



    }
    return 0;
}
