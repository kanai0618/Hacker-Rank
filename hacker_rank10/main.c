#include <stdio.h>
#include <stdlib.h>

int main()
{

 long a[10000],i,j,x[10000],k=0,temp;
long  n;
long  min=99999;

    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[j]-a[i])<min&&(a[j]-a[i])>0)
            {
                min=a[j]-a[i];
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[j]-a[i])==min)
            {
                x[k]=a[i];
                x[k+1]=a[j];
                k=k+2;
            }
        }
    }


    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {printf("%ld\t",x[i]);
    }
    return 0;
}
