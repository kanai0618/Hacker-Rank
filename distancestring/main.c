#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int rec(int a[3][3],int x,int y,int n,int count)
{
    //int count=0;
    if(x<0||y<0||x>=n||y>=n)
        return 0;

    if(a[x][y]==0)
    {
        return count;
    }
    rec(a,x-1,y,n,count+1);
    rec(a,x+1,y,n,count+1);
    rec(a,x,y-1,n,count+1);
    rec(a,x,y+1,n,count+1);
    return 0;

}


int main()
{
    printf("Hello world!\n");

    int a[3][3],i,j,p=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p=rec(a,i,j,3,0);
            printf("%d",p);
        }
    }




    return 0;
}
