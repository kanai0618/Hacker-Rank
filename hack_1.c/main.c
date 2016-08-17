#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int k,m,n,i,a[100],sum=0,x[100],o=0,p=0;
    scanf("%d",&n);

    while(n>0)
    {
        scanf("%d%d",&k,&m);


        for(i=1;i<=k;i++)
        {
            sum+=pow(i,m);
        }


        if(sum>=10)
        {
            while(sum>0)
            {
                a[p]=sum%10;
                p++;
                sum=sum/10;

            }

            for(i=p-1;i>=p-2;i--)
            {
                x[o]=a[i];
                x[o+1]=a[i];
                o++;
            }
        }
        else
        {
            x[o]=0;

            x[o+1]=sum;
            o=o+2;

        }

        n--;
        p=0;
        sum=0;


    }




    for(i=0;i<o;i++)
        {
            printf("%d%d",x[i],x[i+1]);
            i=i+1;

            printf("\n");
        }
    return 0;
}
