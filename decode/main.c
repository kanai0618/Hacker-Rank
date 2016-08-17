#include <stdio.h>
#include <stdlib.h>

int l=1,sum=0,count=0;
void rec(int a[],int i,int j)
{
    int k;
    count++;
    for(k=i;k<j;k++)
    {
        sum+=a[k]*l;
        l=l*10;
    }printf("%d\n",sum);
    if(j<3&&i<3&&count<6)
    {
        sum=0;l=1;
        rec(a,i,j+1);
        //j=0;
        rec(a,i+1,j);
    }

}


int main()
{
    printf("Hello world!\n");
    int a[10]={1,2,3};
    rec(a,0,1);
    return 0;

}
