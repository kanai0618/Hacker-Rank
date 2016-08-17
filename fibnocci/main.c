#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[100],n,i,p=0,k=0,h=1,b=1,c,l,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("01");
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            p++;
        }
        else
        {
            k++;
        }
    }
    for(i=2; i<6; i++)
    {
        c=h+b;
        count++;
        if((count%2)==0)
        {
            if(k!=0)
            {


                for(l=1; l<=c; l++)
                {
                    printf("0");
     \           }
                k=k-c;

            }
        }
        else
        {
            if(p!=0)
            {


                for(l=1; l<=c; l++)
                {
                    printf("1");
                }
            }
            p=p-c;

        }
        h=b;
        b=c;

    }
}
