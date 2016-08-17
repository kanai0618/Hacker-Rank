#include <stdio.h>
#include <stdlib.h>

int d[10],k[10];

void rec(int a[],int i,int n,int c,int sum)
{
    int count=0;
    d[0]=1;
    int p=0;

    if(i<=n)
    {
        if((sum==0)&&(i==n))
        {
            count++;
            //printf("%d\n",count);
            for(i=0; i<=n; i++)
            {
                printf("%d\t%d",d[i],k[i]);
            }
            printf("\n");


        }
        else
        {
            if(c==1)
            {
                d[i+1]=a[i+1];
                k[i]=1;
                //p++;

                sum=sum+a[i+1];
            }
            if(c==2)
            {
                d[i+1]=a[i+1];
                k[i]=2;

                sum=sum-a[i+1];
            }

        }
        rec(a,i+1,n,1,sum);
        rec(a,i+1,n,2,sum);
    }

    //return count;
}

int main()
{
    int a[]= {1,2,3,4,5,6,7};
    //int d[10],k[10];


    rec(a,0,6,1,1);
    rec(a,0,6,2,1);

    //rec(a,0,6,43,0);
    return 0;
}


