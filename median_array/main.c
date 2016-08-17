#include <stdio.h>
#include <stdlib.h>
int max(int i,int j)
{

    if(i>j)
        return i;
    else
        return j;
}
int min(int i,int j)
{
    if(i>j)

        return j;
    else
        return i;
}
int median(int *a,int *b,int m,int n,int i,int j)
{

    if(m+1==n)

    {
        return ((max(a[m],b[i])+min(a[n],b[j]))/2);

    }
    int m1=a[(m+n)/2];

    int m2=b[(i+j)/2];

    int k=(m+n)/2;
    int p=(i+j)/2;
    if(m1>m2)
        return median(a,b,m,k,p,j);
        else
            return median(a,b,k,n,i,p);

}

int main()
{
    printf("Hello world!\n");
    int a[10]={1,12,15,26,38};
    int b[10]={2,13,17,30,45};
    printf("%d",median(a,b,0,4,0,4));

    return 0;
}
