#include <stdio.h>
#include <stdlib.h>

void print(int i,int n,int sum,int *a,int k)
{

    //printf("%d\n",k);

    if(sum>n)
        return ;
    //printf("%d\n",sum);
    if(sum==n)
    {
        int l;
        for(l=0; l<k; l++)
        {
            printf("%d",a[l]);
        }
        printf("\n");
        return ;
    }
    a[k]=i;
    print(i,n,sum+i,a,k+1);
    a[k]=i+1;
    print(i,n,sum+i+1,a,k+1);


}

int main()
{
    printf("Hello world!\n");
    int n=4,a[10],i;

    for(i=1; i<=5; i++)
    {
        print(i,5,0,a,0);
    }


    return 0;
}
