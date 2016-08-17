#include <stdio.h>
#include <stdlib.h>


int matrx(int a[][10],int x,int y,int mat[100],int k)
{
    if((x>=4)||(y>=4)||(x<0)||(y<0))
        return 0;
    mat[k++]=a[x][y];
    if((x==3)&&(y==3))
    {
        int l;
        for(l=0;l<k;l++)
        {
            printf("%d\t",mat[l]);
        }
        printf("\n");
        return 0;
    }
    if(x<4)
    {
        matrx(a,x+1,y,mat,k);
    }
    if(y<4)
    {
        matrx(a,x,y+1,mat,k);
    }
    return 0;
}

int main()
{
    printf("Hello world!\n");
    int a[10][10],mat[100],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    matrx(a,0,0,mat,0);
    return 0;
}
