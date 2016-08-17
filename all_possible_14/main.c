#include <stdio.h>
#include <stdlib.h>

void print(int *a,int i,int j,int k,int n,int *r)
{
    if(k>5)
        return ;
    if(i>n)
    return ;printf("%d%d\n",i,k);

    if(i==n)
    {
        int k;
        for(k=0;k<n;k++)
        {
            printf("%d",r[k]);
        }
        printf("\n");
        return ;
    }
    r[i]=a[k];
    print(a,i+1,j,k+1,n,r);

    print(a,i,j,k+1,n,r);
}



int main()
{
    printf("Hello world!\n");
    int a[10]={1,2,3,4,5},r[10];
    print(a,0,0,0,3,r);


    return 0;
}
