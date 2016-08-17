#include <stdio.h>
#include <stdlib.h>

int l;

void rec(int a[3][3],int i,int j,int *s,int k)
{

    if((i>3)||(j>3)) return ;
    if(i==2)
    {
        for(l=j;l<3;l++)
        {
            s[k++]=a[i][l];
        }
        for(l=0;l<5;l++)
        {
            printf("%d",s[l]);
        }
        printf("\n"); return ;
    }
    if(j==2)
    {
        for(l=i;l<3;l++)
        {
            s[k++]=a[l][j];
        }
        for(l=0;l<5;l++)
        {
            printf("%d",s[l]);
        }
        printf("\n"); return ;
    }
s[k]=a[i][j];

   if((i<2)||(j<2))
    {rec(a,i+1,j,s,k+1);
    rec(a,i,j+1,s,k+1);}
}

int main()
{
    printf("Hello world!\n");


    int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,s[200];
    rec(a,0,0,s,0);



    return 0;
}
