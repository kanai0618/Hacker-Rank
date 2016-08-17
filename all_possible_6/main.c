#include <stdio.h>
#include <stdlib.h>



void rec(int *a,int k,int n)
{
    int l;


    //printf("%d\t%d\t%d\n",i,k,sum);

    int i;
    if(n==0)
    {
        //printf("hi");
        for(l=0; l<k; l++)
        {
            printf("%d",a[l]);
        }
        printf("\n");
        return ;
    }
    else
    {
        for(i=1; i<=2; i++)
        {
            if((n-i)>=0)
            {
                a[k++]=i;
                rec(a,k,n-i);
                a[k--]=0;
            }
        }
    }




}

int main()
{
    printf("Hello world!\n");
    int a[100];
    a[0]=1;
    rec(a,0,4);
    return 0;
}
