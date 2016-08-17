#include <stdio.h>
#include <stdlib.h>


int operation(int *a,int i,int n,int k,int p,int sum)
{

    if(k>p)
        {

            return 0;
        }
    printf("%d%d\n",sum,k);
   /* if(sum==n)
    {
        printf("mil gaya\n");

        return 1;
    }*/


    /*if(i==1)
    {
        sum=sum+a[k];

    }
    if(i==2)
    {
        sum=sum-a[k];

    }
    if(i==3)
    {
        sum=sum*a[k];

    }
    if(i==4)
    {
        sum=sum/a[k];

    }*/

    operation(a,1,n,k+1,p,sum+a[k]);

    operation(a,2,n,k+1,p,sum-a[k]);

    operation(a,3,n,k+1,p,sum*a[k]);

    //operation(a,4,n,k+1,p,sum/a[k-1]);







}

int main()
{

    printf("Hello world!\n");

     \
    int a[10]= {4,3,2},n=11;
    printf("%d",operation(a,1,n,1,3,a[0]));


    return 0;
}
