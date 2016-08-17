#include <stdio.h>
#include <stdlib.h>

int max(int x,int y,int z)
{
    if((x>y)&&(x>z))
    return x;
    if((y>x)&&(y>z))
        return y;
    if((z>x)&&(z>y))
        return z;

}
int min(int x,int y,int z)
{
    if((x<y)&&(x<z))
    return x;
    if((y<x)&&(y<z))
        return y;
    if((z<x)&&(z<y))
        return z;

}





int main()
{
    printf("Hello world!\n");


    int a[10]={-2, -3, 0, -2, -40},n=5,i;
    int prev_min=a[0];
    int prev_max=a[0];
    int curr=a[0];
    int ans=a[0];
    int  curr_max,curr_min;

    for(i=1;i<n;i++)
    {
        curr_max=max(prev_max*a[i],a[i],prev_min*a[i]);
         curr_min=min(prev_min*a[i],a[i],prev_max*a[i]);
         ans=max(ans,curr_max,curr_min);
         prev_max=curr_max;
         prev_min=curr_min;
    }


    printf("%d",ans);


    return 0;
}
