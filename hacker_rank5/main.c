#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int max=1,n,m,p,i,x[1000],k=0;
    scanf("%d",&n);


    while(n>0)
    {
        scanf("%d%d",&m,&p);
        for(i=1;i<=m;i++)
        {
            if(((m*p)%(i*i))==0)
            {

                if(i>max)
                {
                    max=(m*p)/(i*i);
                }
            }
        }
        x[k++]=max;
        max=1;
        n--;

}

for(i=0;i<k;i++)
    printf("%d\n",x[i]);

}
