#include <stdio.h>
#include <stdlib.h>

void print(int n)
{
    int k=0,i,a[10];
    while(n>0)
    {
        a[k++]=n%2;
        n=n/2;
    }
    for(i=0;i<k;i++)
    {
        printf("%d",a[i]);
    }
}


void gray(int x)
{

    int i,z;
    for(i=0; i<x; i++)
    {
        z=i^(i/2);
        print(z);
        printf("\n");
    }

}

int main()
{
    printf("Hello world!\n");
    gray(4);
    return 0;
}
