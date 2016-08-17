#include<stdio.h>

int min(int x,int y)
{
    if(x>y) return y;
    else
        return x;


}



int rec(int *a,int i,int n)
{
    if(2*a[i]>a[n]) return 0;
    else
    return 1+min(rec(a,i+1,n),rec(a,i,n-1));
}

int main()
{
    int a[100]={2,4,5,6,7},i=0,n=4;
    printf("%d",rec(a,0,n));







}
