#include <stdio.h>
#include <stdlib.h>

int x[10];
int i;
void subset(int s,int k,int r,int m,int *w)
{

    x[k]=1;


    if((w[k]+s)==m)
    {
        for(i=1;i<=k;i++)
        {
            printf("%d",x[i]);
        }
        printf("\n");
      return ;

    }
    if(s+w[k]+w[k+1]<=m)
    {
        subset(s+w[k],k+1,r-w[k],m,w);
    }
    if((s+w[k+1]<=m)&&((s+r-w[k])>=m))
    {
        x[k]=0;
        subset(s,k+1,r-w[k],m,w);
    }
}


int main()
{
    printf("Hello world!\n");
    int w[10]={5,10,12,13,15,18};
    subset(0,0,73,30,w);
    return 0;
}

