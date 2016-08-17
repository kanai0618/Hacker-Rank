#include <stdio.h>
#include <stdlib.h>


void all(int a,int i,int n,int sum,int *x)
{


    //printf("%d%d%d\n",i,sum,a);
    if(sum==n)
    {
        int k;
        for(k=0;k<i;k++)
        {
        printf("%d",x[k]);
        }

        printf("\n");
        return ;
    }
    if(i>n)
    return;

    if(sum>n)
    return ;




    x[i]=a;

    all(a,i+1,n,sum+a,x);

    x[i]=a+1;

    all(a+1,i,n,sum+a+1,x);
}

int main()
{
    printf("Hello world!\n");
    int x[10];
    x[0]=1;

    all(1,1,4,1,x);
    return 0;
}
