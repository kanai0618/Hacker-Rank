#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a[10],count=0,k=0,c,p=0,b[10],i,l=10,r;


    scanf("%lld%lld",&r,&c);

    while(r>0)
    {
        if(count%2==0)
        {
            while(k<5)
            {
                a[k]=p;
                p=p+2;
                k++;
            }
            p=0;
            p=p+l;
            l=l+10;
        }
        if(count%2!=0)
        {
            while(k<5)
            {
                a[k]=a[k]+1;
                k++;
            }
        }
        count++;
        k=0;
        /*for(i=0; i<5; i++)
        {
            b[i]=a[i];
        }*/

        r--;

    }
    printf("%lld",a[c-1]);
    return 0;
}
