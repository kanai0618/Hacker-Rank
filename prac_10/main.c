#include <stdio.h>
#include <stdlib.h>

int main()
{


    unsigned long int a[100000],b[100000],c[100000],i,j,n,m;
    scanf("%lu%lu",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%lu",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lu",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lu",&c[i]);
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%b[i-1]== 0)
            {
                a[j-1] = a[j-1] * c[i-1];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%lu\t",a[i]);
    }

    return 0;
}
