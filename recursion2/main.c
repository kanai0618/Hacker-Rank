#include <stdio.h>
#include <stdlib.h>
int max=-9999;
int maxfun(int a[],int i,int n)
{

    if(i<n)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        maxfun(a,i+1,n);
    }
    return max;
}

int main()
{
    printf("Hello world!\n");
    int a[6]={1,2,5,6,3,2};
    printf("%d",maxfun(a,0,6));
    return 0;
}
