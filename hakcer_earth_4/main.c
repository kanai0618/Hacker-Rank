#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x,y,i,max=-999999,z;

    int t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lld%lld",&x,&y);
        for(i=x;i<y;i++)
        {

            if((i&(i+1))>max)
            {

                max=i&(i+1);
            }
        }
        printf("%lld",max);
        printf("\n");
        max=-99999;
        t--;
    }
    return 0;
}
