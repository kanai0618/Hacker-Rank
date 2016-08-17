#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,a[10000],i,j,count=0,k=0;
    int  m,x[10000];
    scanf("%d",&n);


    while(n>0)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=0;i<m-1;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(a[i]==a[j])
                {
                    count++;

                }
            }
        }
        x[k++]=count*2;
        count=0;
        n=n-1;
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
