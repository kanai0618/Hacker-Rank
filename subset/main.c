#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[3]={1,2,3},i,j,n=3,k=0,x[100],count=0,max=-9999;



    for(i=0; i<8; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                printf("%d",a[j]);


            }
            x[k++]=a[j];



        }
        for(i=0;i<k;i++)
            printf("%d",x[i]);

k=0;

        printf("\n");

    }
    printf("NO");

    return 0;
}
