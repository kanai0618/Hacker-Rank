#include <stdio.h>
#include <stdlib.h>

int main()
{




    long long int x,y,z,w,b,t,sum=0;
    scanf("%lld",&t);
    while(t>0)
    {


        scanf("%lld%lld",&b,&w);

        scanf("%lld%lld%lld",&x,&y,&z);


        if(x<=z&&y<=z)
        {
            sum=x*b+y*w;
        }
        if((x>y)&&(z<x))
        {
            sum=(b+w)*y+b*z;
        }
        if((y>x)&&(z<y))
        {
            sum=(b+w)*x+b*z;
        }


        printf("%lld",sum);
        sum=0;
        printf("\n");
        t--;
    }

    return 0;
}
