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
    int i,a[10]={1, -2, -3, 0, 7, -8, -2},n=7,max1[10],max2=1,max3=1,j;
    max1[0]=6;

    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {

            max2=max2*a[j];
            if(max2>max3)
            {
                max3=max2;
            }
        }
        max1[i]=max(max1[i-1],max3);
        max2=1;
        max3=1;

    }
    printf("%d",max1[n-1]);

    return 0;
}
