#include <stdio.h>
#include <stdlib.h>

long long int fun(long long int x)
{
    int i,count=0;
    for(i=1;i<=x/2;i++)
    {
        if((x%i)==0)
        {
            count++;
        }
    }
    return count+1;
}


int main()
{
    long long int x,y,n,z,i,count=0;


    scanf("%lld",&n);


    while(n>0)

    {
     scanf("%lld%lld",&x,&y);

        for(i=x; i<=y; i++)
        {
            z=fun(i);
            if((z%2)!=0)
            {
                count++;
            }
        }
        printf("%lld",count);
        printf("\n");
        count=0;
        n--;
    }



    return 0;
}
