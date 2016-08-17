#include <stdio.h>
#include <stdlib.h>

void rec(int *a,int i,int n,int *p)
{  int k;
    if(i>n)
        return ;
    if(i==n)
    {
        for(k=0;k<n;k++)
        {
            printf("%d",a[k]);
        }
        printf("\n");
    }
    else
    {
        for(k=0;k<2;k++)
        {
            a[i]=p[k];
            rec(a,i+1,n,p);

        }
    }
}

int main()
{

    int p[2]={3,4};
    int a[100];
    int n;int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {rec(a,0,i,p);
    }
    return 0;
}
