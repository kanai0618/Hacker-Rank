#include <stdio.h>
#include <stdlib.h>
int max( int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int pathmax(int a[][100],int i,int j,int m, int n)
{

    int count=0;



    for(i=0; i<=m; i++)
    {
        if(a[i][0]<a[i+1][0])
        {
            a[i][0]=count+1;
            count++;
        }
        else
        {
            a[i][0]=1;
        }
    }
    count=0;
    for(j=0; j<=n; j++)
    {
        if(a[0][j]<a[0][j+1])
        {
            a[0][j]=count+1;
            count++;
        }
        else
        {
            a[0][j]=1;
        }
    }


    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if((a[i][j]<a[i+1][j]))
            {
                a[i][j]=max(a[i-1][j],a[i][j-1])+1;
            }
            else
            {
                a[i][j]=1;
            }
        }
    }


    return a[m][n];


}


int main()
{
    printf("Hello world!\n");


    int a[100][100],i,j,m,n,n1;


    scanf("%d",&n1);
    while(n1>0)
    {

        scanf("%d%d",&m,&n);
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("%d",pathmax(a,0,0,m-1,n-1));
        printf("\n");

        n1--;

    }


    return 0;
}
