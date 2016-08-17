
#include <stdio.h>
#include <stdlib.h>

int main()
{


    long long int a[100000],i,k,m,n,j,count=0;
    scanf("%lld",&n);

    while(n>0)
    {
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<m-1;i++)
        {

            if(a[i]>a[i+1])
            {
                if((a[i]>a[i+1])&&(a[i+1]<a[i+2]))
            {
                count=count+2;
            }
            else
            {


                count++;}
            }

        }
        printf("%lld",count);
        printf("\n");
        count=0;
        n--;
    }



    return 0;
}
