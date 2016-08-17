#include<stdio.h>
int k;

int *prod1(int *a,int left,int right,int i,int *prod)
{
    if(i==5)
        return prod;

    for(k=left;k<i;k++)
    {
        prod[i]=prod[i]*a[k];

    }
    for(k=i+1;k<=right;k++)
    {
        prod[i]=prod[i]*a[k];
    }
    prod1(a,left,right,i+1,prod);
}


int main()
{
    int a[10]={10, 3, 5, 6, 2},i;
    int *prod=prod1(a,0,4,0,prod);
    for(i=0;i<5;i++)
    {
        printf("%d\t",prod[i]);
    }



}
