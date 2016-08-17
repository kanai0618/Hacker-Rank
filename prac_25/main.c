#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");



    int a[]={13,17,5,4,6,2},n=6,get;
    int i,j,k=0,flag=0;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j]&&flag!=1&&a[j]!=0)
            {
                flag=1;

                get=j;

            }
        }
        if(flag==1)
        {
            a[k++]=a[get];
            printf("%d\n",get);
            //a[get]=-9999;
            a[get]=0;




        }
        flag=0;
    }

    for(i=0;i<k;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
