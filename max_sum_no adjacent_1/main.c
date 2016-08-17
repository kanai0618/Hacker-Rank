#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    printf("Hello world!\n");

    int a[10]={3,2,7,10},sum[10],i;
    sum[0]=3;
    sum[1]=3;

    for(i=2;i<4;i++)
    {
        sum[i]=max(sum[i-1],a[i]+sum[i-2]);
    }
    printf("%d",sum[3]);
    return 0;
}
