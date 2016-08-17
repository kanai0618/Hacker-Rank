#include <stdio.h>
#include <stdlib.h>

int main()
{


    long long int a[100000],i,p=0,z,l,k,n,flag=0,flag1=0, max,z1;

    scanf("%lld",&n);

    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    max=0;
    p=p+1;

    while(n>1)
    {
        for(k=p-1; k>=0; k--)
        {
            if(a[k]>a[p])
            {
                z=k;
                flag=1;
                break;
            }
        }
        if(flag=0)
        {
            z=0;
        }
        for(k=p+1; k<n; k++)
        {
            if(a[k]>a[p])
            {
                z1=k;
                flag1=1;
                break;
            }
        }
        if(flag1=0)
        {
            z1=0;
        }
        if(z!=0||z1!=0)
        {
            l=(z+1)*(z1+1);
        }
        if(p==n)
        {
            l=0;
        }

        if(l>max)
        {
            max=l;
        }
        p++;
        flag=0;
        flag1=0;
        n--;
    }
    printf("%lld",max);

    return 0;
}
