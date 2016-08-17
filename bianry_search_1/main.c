#include <stdio.h>
#include <stdlib.h>

int binary(int *a,int i,int j,int x)
{

    int mid=(i+j)/2;
    if(i<0)
        return 0;
    if((a[mid]==x)&&(a[mid-1]!=x))
        return mid;
    else if(a[mid]>=x)
        return binary(a,i,mid,x);
}
int binary1(int *a,int i,int j,int x)
{
    int mid=(i+j)/2;



    if((a[mid]==x)&&(a[mid+1]!=x))
        return mid;
    else if(a[mid]<=x)
        return binary1(a,mid+1,j,x);
}


int main()
{
    printf("Hello world!\n");

    int a[10]={1, 2, 3, 3, 3, 3, 10},n=7;
    printf("%d",binary(a,0,7,3));
    printf("%d",binary1(a,0,7,3));
    return 0;
}
