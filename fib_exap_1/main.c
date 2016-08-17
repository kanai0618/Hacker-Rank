#include <stdio.h>
#include <stdlib.h>

int max(int x,int y,int z)
{
    if((x>y)&&(y>z))
        return x;
    if((y>z)&&(z>x))
        return y;
        if((z>y)&&(z>x))
        return z;
}

int fib(int n,int k)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    else
        return fib(n-2,k)+fib(n-5,k)+fib(n-k,k)+1;
}


int main()
{
    printf("Hello world!\n");


    printf("%d",fib(9,7));
    return 0;
}
