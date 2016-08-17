#include <stdio.h>
#include <stdlib.h>

int max(int x,int y,int z)
{
    if((x>y)&&(y>z))
        return x;
        if((y>z)&&(y>x))
        return y;
        if((z>y)&&(z>x))
        return z;

}
int min(int x,int y,int z)
{
    if((x<y)&&(y<z))
        return x;
        if((y<z)&&(y<x))
        return y;
        if((z<y)&&(z<x))
        return z;

}


int product(int *a,int n)

{
    int result=1,i,maxmin,maxmax,curr;
    for(i=0;i<n;i++)
    {
        maxmin=min(maxmin*a[i],result*a[i],result);
        maxmax=max(maxmax*a[i],result*a[i],result);
        curr=max(maxmax,maxmin,result);
        if(curr>result)
        {
            result=curr;
        }
    }
    return result;
}



int main()
{
    printf("Hello world!\n");

    int a[10] = {6, -3, -10, 0, 2};
    printf("%d",product(a,5));
    return 0;
}
