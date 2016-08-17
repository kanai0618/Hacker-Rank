#include <stdio.h>
#include <stdlib.h>

int main()
{



    int a[100],b[100],i,j,c[1000],k=0,n,l,carry=0;
    scanf("%d",&n);

    for(i=n-1;i>=0;i--)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        l=a[i]+b[i];
        if(l==2)
        {
            c[k++]=carry;
            carry=1;
        }
        if(l<=1)
        {
            l=a[i]+b[i]+carry;
            {
                if(l>2)
                {
                    c[k++]=1;
                    carry=1;

                }
                if(l==2)
                {
                    c[k++]=0;
                    carry=1;

                }
                else
                {
                    c[k++]=a[i]+b[i];
                }
            }
        }
    }
    if(carry==1)
    {
        c[k++]=1;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d",c[i]);
    }
}
