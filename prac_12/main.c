#include <stdio.h>
#include <stdlib.h>

#include<string.h>


int main()
{


    long long int a[10000],i,j,k=0,b[10000],p,m,o,n,l,g,c[10000],carry=0,u=0,x[10000];
    char s[1000];

    scanf("%lld%lld",&n,&m);
    for(i=0; i<n; i++)
    {

        scanf("%lld",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        scanf("%lld",&b[i]);
    }


    while(m>0)
    {
        scanf("%s",s);


        if(strcmp(s,"set_a")==0)
        {

            scanf("%lld%lld",&l,&o);
            a[l]=o;

        }
        if(strcmp(s,"set_b")==0)
        {
            scanf("%lld%lld",&l,&o);
            b[l]=o;

        }
        if(strcmp(s,"get_c")==0)
        {

            scanf("%lld",&g);


            for(p=0; p<n; p++)
            {
                l=a[p]+b[p];

                if(l==2)
                {
                    c[k++]=carry;
                    carry=1;
                }
                if(l<=1)
                {
                    l=a[p]+b[p]+carry;
                    {
                        if(l>2)
                        {
                            c[k++]=1;
                            carry=1;

                        }
                        if(l==2)
                        {

                            c[k++]=0;
                            carry=1;
                        }
                        else
                        {
                            c[k++]=a[p]+b[p]+carry;
                            carry=0;
                        }

                    }

                }


            }
            if(carry==1)
                {
                    c[k++]=1;
                }

                for(l=0;l<k;l++)
                {
                    printf("%lld",c[l]);
                }
                printf("\n");

            printf("%lld",c[g]);
            x[u++]=c[g];

carry=0;

        }
        k=0;
        m--;


    }
for(i=0;i<u;i++)
{
    printf("%lld",x[i]);
}

    return 0;
}

