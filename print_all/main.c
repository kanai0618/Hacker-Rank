#include <stdio.h>
#include <stdlib.h>


void print(int *a,int i,int n)
{
    if(i>n)
    return ;
    if(i==n)
    {
        int k;
        for(k=0;k<n;k++)
        {
            printf("%d",a[k]);
        }
        printf("\n");
        return ;
    }
    a[i]=0;
    print(a,i+1,n);
    a[i]=1;
    print(a,i+1,n);
}

int main()
{
    printf("Hello world!\n");

    int a[10],i;
    for(i=1;i<=5;i++)
    {
        print(a,0,i);
    }
    return 0;
}
