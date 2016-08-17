#include <stdio.h>
#include <stdlib.h>

int max(int x,int y,int z)
{

        if((x>=y)&&(x>=z))
        return x;
        if((y>=x)&&(y>=z))
        return y;
        if((z>=y)&&(z>=x))
        return z;

}


int main()
{

    int a[100],n,i,sum[100],max1=-9999,t,k;


    scanf("%d",&t);


  while(t>0)
{
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=k;i++)
    {
         if(a[i]>=max1)
         {
             max1=a[i];
         }
    }
    for(i=0;i<=k;i++)
    {
        sum[i]=max1;
    }



    for(i=k+1;i<n;i++)
    {
        sum[i]=max(sum[i-k-1],sum[i-1],sum[i-k-1]+a[i]);

    }
    printf("%d",sum[n-1]);
    printf("\n");
    max1=-9999;
    t--;


}
    return 0;
}
