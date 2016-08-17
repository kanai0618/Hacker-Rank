#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
int main()
{



    int z[100][100],i,j,k=1,a,b,c,d,e,f,p,q,r,s,t,u;
    int count=0,flag=0,m,n;

    scanf("%d",&m);


    while(m>0)
    {
        scanf("%d",&n);


        p=0;
        q=n;
        r=0;
        u=n-1;
        s=0;
        t=n;
        a=n-1;
        b=0;

        c=n-1;
        d=n-1;
        f=0;
        e=1;


        while(flag!=1)
        {
            if(k==n*n+1)
            {
                flag=1;
            }
            if((count%2)==0)
            {
                for(i=p; i<q; i++)
                {
                    z[i][r]=k;
                    k++;
                }
                for(j=s+1; j<t; j++)
                {
                    z[u][j]=k;
                    k++;
                }
                p++;
                q--;
                r++;
                s++;
                u--;
                t--;


            }
            count++;
            if((count%2)!=0)
            {
                for(i=a-1; i>=b; i--)
                {
                    z[i][c]=k;
                    k++;
                }
                for(j=d-1; j>=e; j--)
                {
                    z[f][j]=k;
                    k++;
                }
                a--;
                c--;
                d--;
                b++;
                e++;
                f++;

            }

            count++;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ",z[i][j]);
            }
            printf("\n");
            printf("\n");
        }
        printf("\n");
        count=0;
        k=1;
        flag=0;
        m--;
    }
    return 0;
}
