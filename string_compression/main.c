#include <stdio.h>
#include <stdlib.h>



int max(int x,int y)
{
    if(x>y) return x;
    else
        return y;
}
int main()
{


    int a[100][100],i,j,n,t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);


        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                scanf("%d",&a[i][j]);
            }

        }



        for(i=n-1; i>=0; i--)
        {
            for(j=0; j<i; j++)
            {
                a[i-1][j]=a[i-1][j]+max(a[i][j],a[i][j+1]);
            }
        }

        printf("%d",a[0][0]);
        t--;
    }

    return 0;
}
