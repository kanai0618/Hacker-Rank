#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int a[10]={1,2,3,1,2,3},count=0,max=-9999,sum1=0,sum2=0,i=0,k=1,j,l;


    while(i<7)
    {
        while(k<7)
        {


        for(j=i,l=k;j<=k/2&&l>=k/2;j++,l--)
        {
            sum1=sum1+a[j];sum2=sum2+a[l];count++;
        }

        printf("\n");
        if(sum1==sum2)
        {
            if(count>max)
            {
                max=count;
                printf("sum%d",sum1); printf("index start\t%d\tend\t%d",i,k);
                //m=i;n=k;
                count=0;
            }
        }

        sum1=0;sum2=0;count=0;k=k+2;
        }

        i=i+1;
        k=i+1;
    }

    return 0;
}
