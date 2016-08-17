#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j,l=0,k=0,a[4][4],b[10],c[10];

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j]==0)
            {
                b[k++]=i;
                c[l++]=j;
            }
        }

    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<4; j++)
        {


            a[b[i]][j]=0;
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<l; j++)
        {


            a[i][c[j]]=0;
        }

    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
