#include <stdio.h>
#include <stdlib.h>


int sum(int *a,int n,int i)
{

    if(i<0) return 0;

    if(n==0) return 1;
    if(a[i-1]>n) return sum(a,n,i-1);

    else
        return sum(a,n,i-1)||sum(a,n-a[i],i-1);



}



int main()
{
    printf("Hello world!\n");
    int a[3]={1,5,10,4};int i=2,n=11;
    printf("%d",sum(a,1,3));
    return 0;
}
