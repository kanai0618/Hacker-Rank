#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    int n,m,count=0,p,i,x[1000],k=0;


    scanf("%d",&n);

    while(n>0)
    {
        scanf("%d%d",&m,&p);
        for(i=1;i<=p;i++)
        {
            if((i*i)>=m&&(i*i)<=p)
            {
                count++;
            }
        }
        x[k++]=count;
        count=0;
        n=n-1;
    }
    for(i=0;i<k;i++)
        printf("%d\n",x[i]);
    return 0;
}
