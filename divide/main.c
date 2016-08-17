#include <stdio.h>
#include <stdlib.h>
int x[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};

int main()
{

    long long int n;
    int m,h,s,i,k,count=0,count1=0,count2=0;
    scanf("%lld",&n);
    while(n>0)
    {
        scanf("%d%d%d",&h,&m,&s);
        for(i=s;i<=59;i++)
        {
            for(k=0;k<17;k++)
            {
                if(((i%x[k])==0)&&((m%x[k])==0)&&((h%x[k])==0))
                {
                    count++;
                }
                if(((i%x[k])!=0)&&((m%x[k])!=0)&&((h%x[k])!=0)||((i%x[k])==0)&&((m%x[k])!=0)&&((h%x[k])!=0)||((i%x[k])!=0)&&((m%x[k])==0)&&((h%x[k])!=0)||((i%x[k])!=0)&&((m%x[k])!=0)&&((h%x[k])==0)||((i%x[k])==0)&&((m%x[k])==0)&&((h%x[k])!=0)||((i%x[k])==0)&&((m%x[k])!=0)&&((h%x[k])==0)||((i%x[k])!=0)&&((m%x[k])==0)&&((h%x[k])==0))
                {
                    count1++;
                }

                if(count1==17)
                {
                    count2++;
                    count1=0;
                }

            }
        }
        for(i=m;i<=59;i++)
        {
            for(k=0;k<17;k++)
            {

                if(((i%x[k])!=0)&&((s%x[k])!=0)&&((h%x[k])!=0)||((i%x[k])==0)&&((s%x[k])!=0)&&((h%x[k])!=0)||((i%x[k])!=0)&&((s%x[k])==0)&&((h%x[k])!=0)||((i%x[k])!=0)&&((s%x[k])!=0)&&((h%x[k])==0)||((i%x[k])==0)&&((s%x[k])==0)&&((h%x[k])!=0)||((i%x[k])==0)&&((s%x[k])!=0)&&((h%x[k])==0)||((i%x[k])!=0)&&((s%x[k])==0)&&((h%x[k])==0))
                {
                    count1++;
                }

                if(count1==17)
                {
                    count2++;
                    count1=0;
                }

            }
        }
        count2=count2/count;
        if(count2==0)
        {
            count2=count2/count;
            count=1;
        }

        printf("%d:%d",count,count2);
        printf("\n");
        count=0;
        count1=0;
        n--;
    }

    return 0;
}
