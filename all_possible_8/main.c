#include <stdio.h>
#include <stdlib.h>


void rec(int *a,int sum,int i,int n,int l)
{
    int k;
    if(sum>n) return ;
    //printf("%d\t%d\n",sum,l);
    a[l]=i;

    if(sum==n)
    {
        for(k=0;k<l;k++)
        {
            printf("%d",a[k]);
        }
        l--;
        printf("\n");
    }

    //printf("%d\n",a[l]);

    rec(a,sum+i,i,5,l+1);
    rec(a,sum+i,i+1,5,l+1);
}

int main()
{
    printf("Hello world!\n");
    int a[100],i,sum=0;
    for(i=1;i<=3;i++)
    {rec(a,i,i,5,0);}
    return 0;
}
