#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double max(double x,double y,double z)
{
    if((x>y)&&(x>z))
    {
        return x;

    }
    if((y>x)&&(y>z))
    {
        return y;

    }
    if((z>y)&&(z>x))
    {
        return z;

    }
}


int main()
{
    double x,y,z,k,m;
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        k=max(x,y,z);
        m=k/2;
        printf("%lf",m);
        printf("%.4lf",3.1415*(k/2)*(k/2));
        printf("\n");
        t--;


    }


    return 0;
}
