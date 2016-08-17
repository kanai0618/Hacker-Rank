#include <stdio.h>
#include <stdlib.h>

void rec(int *a,int k,int n)
{
    int i;
    if(k>3) return ;
    if(k==3)
    {
        for(i=0;i<3;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            a[k]=i;
            rec(a,k+1,4);
        }
    }
}


int main()
{


    int a[10],k=0,n=4;
    printf("All possible for n=4\n");
    rec(a,0,4);
    return 0;
}
