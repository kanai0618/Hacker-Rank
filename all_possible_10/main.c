#include <stdio.h>
#include <stdlib.h>
int count=0;
void possible(int *a,int i,int n,int k,int *p)
{
    if(i==n)
    {
        for(i=0;i<k;i++)
        {
            printf("%d\t",p[i]);

        }
        count++;

        printf("\n");
        return ;
    }
    if(i<n)
    {
        p[k]=a[i];
        possible(a,i+1,n,k+1,p);
    }
    if(i<n)
    {
        p[k]=10*a[i]+a[i];
        possible(a,i+2,n,k+1,p);
    }
}


int main()
{
    printf("Hello world!\n");
    int a[10]={1,1,1,1,1,1,1,1,1,1};
    int p[10];

    possible(a,0,10,0,p);
    printf("Total possible combination\t%d",count);

    return 0;
}
